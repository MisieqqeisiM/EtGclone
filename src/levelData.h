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
                std::pair<int, int>(2, 10),
                std::pair<int, int>(-1, 0)
            },
            Door
            {
                std::pair<int, int>(17, 10),
                std::pair<int, int>(1, 0)
            },
            Door
            {
                std::pair<int, int>(10, 2),
                std::pair<int, int>(0, -1)
            },
            Door
            {
                std::pair<int, int>(10, 17),
                std::pair<int, int>(0, 1)
            }
        }
    }
};
const std::vector<std::vector<int>> levelRoomIds{
    std::vector<int>{0,0,0,0,0,0,0,0}
};
#endif