#include "TileMap.h"
#include <cmath>
TileMap::TileMap(int width, int height) : tiles(width * height, Tile{NONE})
{
    this->width = width;
    this->height = height;
}
TileMap::TileMap(const std::vector<Tile> &tiles, int width, int height) : tiles(tiles)
{
    this->width = width;
    this->height = height;
}
int TileMap::getHeight() const
{
    return this->height;
}
int TileMap::getWidth() const
{
    return this->width;
}
Tile TileMap::getTile(int x, int y) const
{
    return this->tiles[y * this->width + x];
}
void TileMap::setTile(Tile tile, int x, int y)
{
    this->tiles[y * this->width + x] = tile;
}
void TileMap::paste(const TileMap &tilemap, int x, int y)
{
    for (int i = 0; i < tilemap.getWidth(); i++)
        for (int j = 0; j < tilemap.getHeight(); j++)
        {
            Tile tile = tilemap.getTile(i, j);
            if (tile.type != NONE)
            {
                this->setTile(tilemap.getTile(i, j), i + x, j + y);
            }
        }
}
bool TileMap::isAir(float x, float y) const
{
    return this->getTile(std::floor(x), std::floor(y)).isAir();
}