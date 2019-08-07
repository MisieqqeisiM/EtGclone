#ifndef TILE_MAP_H
#define TILE_MAP_H
#include <vector>
#include "Tile.h"
class TileMap
{
public:
    TileMap(int width, int height);
    TileMap(const std::vector<Tile> &tiles, int width, int height);
    void paste(const TileMap &tilemap, int x, int y);
    Tile getTile(int x, int y) const;
    void setTile(Tile tile, int x, int y);
    int getWidth() const;
    int getHeight() const;
    bool isAir(float x, float y) const;

private:
    std::vector<Tile> tiles;
    int width, height;
};
#endif