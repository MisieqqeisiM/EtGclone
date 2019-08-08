#ifndef CORRIDOR_H
#define CORRIDOR_H
#include "Room.h"
#include <utility>
class Corridor : public Room
{
    public:
        Corridor(std::pair<int,int> door1, std::pair<int,int> door2, std::pair<int,int> coords);
        virtual int getWidth() const override;
	    virtual int getHeight() const override;
	    virtual int getX() const override;
	    virtual int getY() const override;
	    virtual Tile getTile(int x, int y) const override;
        virtual void move(int x, int y) override;
        virtual int getDoorCount() const override;
	    virtual Door getDoor(int id) const override;
    private:
        std::pair<int,int> door1, door2, coords;
};
#endif