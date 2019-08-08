#include "Corridor.h"
#include "levelData.h"
#include <cmath>
Corridor::Corridor(std::pair<int, int> door1, std::pair<int, int> door2, std::pair<int, int> coords)
{
    this->door1 = door1;
    this->door2 = door2;
    this->coords = coords;
}
bool isDoorVertical(std::pair<int, int> door, std::pair<int, int> coords)
{
    return door.first < coords.first || door.first > coords.first + 20;
}
int Corridor::getX() const
{
    return std::min(door1.first - !isDoorVertical(door1, coords), door2.first - !isDoorVertical(door2, coords));
}
int Corridor::getY() const
{
    return std::min(door1.second - isDoorVertical(door1, coords), door2.second - isDoorVertical(door2, coords));
}
int Corridor::getWidth() const
{
    return std::max(door1.first + 2*!isDoorVertical(door1, coords), door2.first + 2*!isDoorVertical(door2, coords)) - this->getX() + 1;
}
int Corridor::getHeight() const
{
    return std::max(door1.second + 2*isDoorVertical(door1, coords), door2.second + 2*isDoorVertical(door2, coords)) - this->getY() + 1;
}
void Corridor::move(int x, int y)
{
    door1 = std::pair<int, int>(door1.first + x, door1.second + y);
    door2 = std::pair<int, int>(door2.first + x, door2.second + y);
    coords = std::pair<int, int>(coords.first + x, coords.second + y);
}
int Corridor::getDoorCount() const
{
    return 2;
}
Door Corridor::getDoor(int id) const
{
    if (id == 0)
    {        
        std::pair<int, int> destination(std::floor(door1.first/20.0),std::floor(door1.second/20.0));
        return Door{door1,destination};
    } else{
        std::pair<int, int> destination(std::floor(door2.first/20.0),std::floor(door2.second/20.0));
        return Door{door2,destination};
    }
}
bool isInRect(int x, int y, int ax, int ay, int bx, int by)
{
    int minX = std::min(ax, bx);
    int minY = std::min(ay, by);
    int maxX = std::max(ax, bx);
    int maxY = std::max(ay, by);
    return x >= minX && x <= maxX && y >= minY && y <= maxY;
}
Tile Corridor::getTile(int x, int y) const
{
    int roomX = getX(), roomY = getY();
    std::pair<int,int> door1(this->door1.first-roomX, this->door1.second-roomY);
    std::pair<int,int> door2(this->door2.first-roomX, this->door2.second-roomY);
    std::pair<int,int> coords(this->coords.first-roomX, this->coords.second-roomY);
    std::pair<int, int> midpoint(door1.first, door2.second);
    if (midpoint.first < coords.first || midpoint.first > coords.first + 20 || midpoint.second < coords.second || midpoint.second > coords.second + 20)
    {
        midpoint.first = door2.first;
        midpoint.second = door1.second;
    }
    if (isInRect(x, y, door1.first, door1.second, midpoint.first + 1, midpoint.second + 1))
        return Tile{FLOOR};
    if (isInRect(x, y, door2.first, door2.second, midpoint.first + 1, midpoint.second + 1))
        return Tile{FLOOR};
    if (x == midpoint.first && y == midpoint.second)
        return Tile{FLOOR};

    if (isInRect(x, y, door1.first-!isDoorVertical(door1, coords), door1.second-isDoorVertical(door1, coords), midpoint.first + 2, midpoint.second + 2))
        return Tile{WALL};
    if (isInRect(x, y, door2.first-!isDoorVertical(door2, coords), door2.second-isDoorVertical(door2, coords), midpoint.first + 2, midpoint.second + 2))
        return Tile{WALL};
    if (isInRect(x, y, midpoint.first-1, midpoint.second-1,midpoint.first+2,midpoint.second+2))
        return Tile{WALL};

    return Tile{NONE};
}