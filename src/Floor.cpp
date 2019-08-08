#include "Floor.h"
#include "levelData.h"
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
Floor::Floor()
{
    while (!generate())
        ;
}
Floor::~Floor()
{
    delete this->tiles;
}
void pasteRoom(int x, int y, int roomID, std::map<std::pair<int, int>, int> &takenFields, std::map<std::pair<int, int>, int> &possibleCorridors, const std::vector<std::pair<int, int>> &roomShape, const std::vector<std::pair<int, int>> &doors)
{
    for (std::pair<int, int> field : roomShape){
        takenFields.insert(std::pair<std::pair<int, int>, int>(std::pair<int, int>(field.first + x, field.second + y), roomID));
        possibleCorridors.erase(std::pair<int, int>(field.first + x, field.second + y));
    }for (std::pair<int, int> field : doors)
    {
        field = std::pair<int, int>(field.first + x, field.second + y);
        if (takenFields.find(field) == takenFields.end())
            possibleCorridors.insert(std::pair<std::pair<int, int>, int>(field, roomID));
    }
}
void writeMap(const std::map<std::pair<int, int>, int> &a)
{
    for (const auto &x : a)
    {
        std::cout << "(" << x.first.first << ", " << x.first.second << ")"
                  << " => " << x.second << std::endl;
    }
}
bool checkPosition(int roomID, std::map<std::pair<int, int>, int> &takenFields, std::map<std::pair<int, int>, int> &possibleCorridors, const std::vector<std::pair<int, int>> &roomShape, const std::vector<std::pair<int, int>> &doors, std::pair<int, int> possibleCorridor, std::pair<int, int> door)
{
    int x = possibleCorridor.first - door.first;
    int y = possibleCorridor.second - door.second;
    for (std::pair<int, int> coords : roomShape)
    {
        if (takenFields.find(std::pair<int, int>(coords.first + x, coords.second + y)) != takenFields.end())
            return false;
    }
    pasteRoom(x, y, roomID, takenFields, possibleCorridors, roomShape, doors);
    
    return true;
}
bool Floor::generate()
{
    std::map<std::pair<int, int>, int> takenFields;
    std::map<std::pair<int, int>, int> possibleCorridors;
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
            this->rooms.push_back(BasicRoom(0, 0, id));
            left = 0;
            top = 0;
            right = this->rooms[0].getWidth();
            bottom = this->rooms[0].getHeight();
            first = false;
        }
        else
        {
            std::random_shuffle(doors.begin(), doors.end());
            std::vector<std::pair<int, int>> possibleCorridorsMixed;
            possibleCorridorsMixed.reserve(possibleCorridors.size());
            for (const std::pair<std::pair<int, int>, int> &coords : possibleCorridors)
                possibleCorridorsMixed.push_back(coords.first);
            std::random_shuffle(possibleCorridorsMixed.begin(), possibleCorridorsMixed.end());
            for (std::pair<int, int> door : doors)
            {
                for (std::pair<int, int> possibleCorridor : possibleCorridorsMixed)
                {
                    if (checkPosition(this->rooms.size(), takenFields, possibleCorridors, roomTemplates[id].blocksTaken, doors, possibleCorridor, door))
                    {
                        this->rooms.push_back(BasicRoom((possibleCorridor.first - door.first) * 20, (possibleCorridor.second - door.second) * 20, id));
                        const Room &room = this->rooms[this->rooms.size() - 1];
                        const Room& connected = rooms[possibleCorridors[possibleCorridor]];
                        std::pair<int,int> door1;
                        std::pair<int,int> door2;
                        for(int i = 0; i<connected.getDoorCount(); i++){
                            Door d = connected.getDoor(i);
                            if(d.destination==possibleCorridor)
                                door1 = d.placement;
                        }
                        for(int i = 0; i<room.getDoorCount(); i++){
                            Door d = room.getDoor(i);
                            if(d.destination==possibleCorridor)
                                door2 = d.placement;
                        }

                        possibleCorridors.erase(possibleCorridor);
                        takenFields.insert(std::pair<std::pair<int, int>, int>(possibleCorridor, this->corridors.size()));
                        
                        this->corridors.push_back(Corridor(door1, door2, std::pair<int,int>(possibleCorridor.first*20, possibleCorridor.second*20)));
                        
                        if (room.getX() < left)
                        {
                            left = room.getX();
                        }
                        if (room.getY() < top)
                        {
                            top = room.getY();
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
            this->corridors.clear();
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
    for (Room &room : this->corridors)
    {
        room.move(-left, -top);
        std::cout<<room.getX()<<std::endl;
        //std::cout<<"("<<room.getDoor(0).placement.first<<", "<<room.getDoor(0).placement.second<<") ("<<room.getDoor(1).placement.first<<", "<<room.getDoor(1).placement.second<<")"<<std::endl;
        room.paste(*(this->tiles));
    }
    return true;
}