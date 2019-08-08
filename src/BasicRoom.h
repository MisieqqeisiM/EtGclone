#ifndef BASIC_ROOM_H
#define BASIC_ROOM_H
#include "Room.h"
class BasicRoom : public Room
{
public:
    BasicRoom(int x, int y, int id);
    virtual int getWidth() const override;
	virtual int getHeight() const override;
	virtual int getX() const override;
	virtual int getY() const override;
	virtual Tile getTile(int x, int y) const override;
    virtual void move(int x, int y) override;
    virtual int getDoorCount() const override;
	virtual Door getDoor(int id) const override;
private:
    int x, y;
    int id;
};
#endif