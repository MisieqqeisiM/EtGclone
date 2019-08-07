#ifndef FLOOR_H
#define FLOOR_H
#include <vector>
#include "Room.h"
#include "TileMap.h"

class Floor{
    public:
        Floor();
        ~Floor();
        Tile getTile(int x, int y) const;
	    void setTile(int x, int y, Tile tile);
        std::vector<Room> rooms;
	    
    private:
        bool generate();
        TileMap* tiles;

};
#endif