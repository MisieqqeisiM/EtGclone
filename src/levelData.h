#ifndef LEVEL_DATA_H
#define LEVEL_DATA_H
#include <vector>
#include "TileMap.h"

struct Door{
    std::pair<int,int> placement;
    std::pair<int,int> destination;
};
struct RoomTemplate
{
    TileMap tilemap;
    std::vector<std::pair<int, int>> blocksTaken;
    std::vector<Door> doors;
};

const std::vector<RoomTemplate> roomTemplates
{
    RoomTemplate
    {
        TileMap(
            std::vector<Tile>
            {
                Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE}
            },
        20, 20),
        std::vector<std::pair<int, int>>
        {
            std::pair<int, int>(0, 0)
        }, 
        std::vector<Door>
        {
            Door
            {
                std::pair<int, int>(1, 9),
                std::pair<int, int>(-1, 0)
            },
            Door
            {
                std::pair<int, int>(18, 9),
                std::pair<int, int>(1, 0)
            },
            Door
            {
                std::pair<int, int>(9, 1),
                std::pair<int, int>(0, -1)
            },
            Door
            {
                std::pair<int, int>(9, 18),
                std::pair<int, int>(0, 1)
            }
        }
    },
    RoomTemplate
    {
        TileMap(
            std::vector<Tile>
            {
                Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{FLOOR},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{WALL},Tile{NONE},
                Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE},Tile{NONE}
            },
        20, 40),
        std::vector<std::pair<int, int>>
        {
            std::pair<int, int>(0, 0),
            std::pair<int, int>(0, 1)
        }, 
        std::vector<Door>
        {
            Door
            {
                std::pair<int, int>(1, 9),
                std::pair<int, int>(-1, 0)
            },
            Door
            {
                std::pair<int, int>(18, 9),
                std::pair<int, int>(1, 0)
            },
            Door
            {
                std::pair<int, int>(9, 1),
                std::pair<int, int>(0, -1)
            },
            Door
            {
                std::pair<int, int>(1, 29),
                std::pair<int, int>(-1, 1)
            },
            Door
            {
                std::pair<int, int>(18, 29),
                std::pair<int, int>(1, 1)
            },
            Door
            {
                std::pair<int, int>(9, 38),
                std::pair<int, int>(0, 2)
            }
        }
    }
};
const std::vector<std::vector<int>> levelRoomIds{
    std::vector<int>{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};
#endif