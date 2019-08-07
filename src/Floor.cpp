#include "Floor.h"
#include "levelData.h"
#include <map>
#include <set>
#include <algorithm>
Floor::Floor()
{
    while (!generate())
        ;
}
Floor::~Floor()
{
    delete this->tiles;
}
void pasteRoom(int x, int y, int roomID, std::map<std::pair<int, int>, int> &takenFields, std::set<std::pair<int, int>> &possibleCorridors, const std::vector<std::pair<int, int>> &roomShape, const std::vector<std::pair<int, int>> &doors)
{
    for (std::pair<int, int> field : roomShape)
        takenFields.insert(std::pair<std::pair<int, int>, int>(std::pair<int, int>(field.first + x, field.second + y), roomID));
    for (std::pair<int, int> field : doors)
    {
        field = std::pair<int, int>(field.first + x, field.second + y);
        if (takenFields.find(field) == takenFields.end())
            possibleCorridors.insert(field);
    }
}
bool checkPosition(int roomID, std::map<std::pair<int, int>, int> &takenFields, std::set<std::pair<int, int>> &possibleCorridors, const std::vector<std::pair<int, int>> &roomShape, const std::vector<std::pair<int, int>> &doors, std::pair<int, int> possibleCorridor, std::pair<int, int> door)
{
    int x = possibleCorridor.first - door.first;
    int y = possibleCorridor.second - door.second;
    for (std::pair<int, int> coords : roomShape)
    {
        if (takenFields.find(std::pair<int,int>(coords.first+x, coords.second+y)) != takenFields.end())
            return false;
    }
    pasteRoom(x, y, roomID, takenFields, possibleCorridors, roomShape, doors);
    possibleCorridors.erase(possibleCorridor);
    takenFields.insert(std::pair<std::pair<int, int>, int>(possibleCorridor, -1));
    return true;
}
bool Floor::generate()
{
    std::map<std::pair<int, int>, int> takenFields;
    std::set<std::pair<int, int>> possibleCorridors;
    std::vector<int> roomIds = levelRoomIds[0];
    std::random_shuffle(roomIds.begin(), roomIds.end());

    bool first = true;
    int left, right, top, bottom;
    for (int id : roomIds)
    {
        int doorCount = roomTemplates[id].doors.size();
        std::vector<std::pair<int, int>> doors;
        doors.reserve(doorCount);
        for (int i = 0; i < doorCount; i++)
            doors.push_back(roomTemplates[id].doors[i].destination);
        if (first)
        {
            pasteRoom(0, 0, 0, takenFields, possibleCorridors, roomTemplates[id].blocksTaken, doors);
            this->rooms.push_back(Room(0, 0, id));
            left = 0;
            top = 0;
            right = this->rooms[0].getWidth();
            bottom = this->rooms[0].getHeight();
            first = false;
        }
        else
        {
            std::random_shuffle(doors.begin(), doors.end());
            std::vector<std::pair<int, int>> possibleCorridorsMixed(possibleCorridors.size());
            std::copy(possibleCorridors.begin(), possibleCorridors.end(), possibleCorridorsMixed.begin());
            std::random_shuffle(possibleCorridorsMixed.begin(), possibleCorridorsMixed.end());
            for (std::pair<int, int> door : doors){
                for (std::pair<int, int> possibleCorridor : possibleCorridorsMixed)
                {
                    if (checkPosition(this->rooms.size(), takenFields, possibleCorridors, roomTemplates[id].blocksTaken, doors, possibleCorridor, door))
                    {
                        this->rooms.push_back(Room((possibleCorridor.first - door.first) * 20, (possibleCorridor.second - door.second) * 20, id));
                        Room &room = this->rooms[this->rooms.size() - 1];
                        if (room.getX() < left)
                        {
                            left = room.getX();
                        }
                        if (room.getY() < top)
                        {
                            top = room.getX();
                        }
                        if (room.getX() + room.getWidth() > right)
                        {
                            right = room.getX() + room.getWidth();
                        }
                        if (room.getY() + room.getHeight() > bottom)
                        {
                            bottom = room.getY() + room.getHeight();
                        }
                        goto endloop;
                    }
                }
            }
            this->rooms.clear();
            return false;
        endloop:;
        }
    }
    this->tiles = new TileMap(right - left, bottom - top);
    for (Room &room : this->rooms)
    {
        room.move(-left, -top);
        room.paste(*(this->tiles));
    }
    return true;
}