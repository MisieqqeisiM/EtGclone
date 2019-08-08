#ifndef FLOOR_H
#define FLOOR_H
#include <vector>
#include "BasicRoom.h"
#include "TileMap.h"
#include "Corridor.h"
class Floor{
    public:
        Floor();
        ~Floor();
        Tile getTile(int x, int y) const;
	    void setTile(int x, int y, Tile tile);
        std::vector<BasicRoom> rooms;
	    std::vector<Corridor> corridors;
    private:
        bool generate();
        TileMap* tiles;

};
#endif