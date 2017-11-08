#include "movable.h"

MovablePoint::MovablePoint(int x, int y ,int xSpeed, int ySpeed):x(x),y(y),xSpeed(xSpeed),ySpeed(ySpeed){}
void MovablePoint::moveUp()
{
	y++;
}

void MovablePoint::moveDown()
{
	y--;
}

void MovablePoint::moveLeft()
{
	x--;
}	

void MovablePoint::moveRight()
{
	x++;
}

MovableRectangle::MovableRectangle(int x1, int y1 ,int x2, int y2,int xSpeed, int ySpeed):p1(x1,y1,xSpeed,ySpeed),p2(x2,y2,xSpeed,ySpeed){}
void MovableRectangle::moveUp()
{
	p1.moveUp();
	p2.moveUp();
}

void MovableRectangle::moveDown()
{
	p1.moveDown();
	p2.moveDown();
}

void MovableRectangle::moveLeft()
{
	p1.moveLeft();
	p2.moveLeft();
}	

void MovableRectangle::moveRight()
{
	p1.moveRight();
	p2.moveRight();
}

ostream& operator<<(ostream& o, const MovablePoint& mp)
{
	o << mp.x << " " << mp.y << " "<< mp.xSpeed << " " << mp.ySpeed ;
}

ostream& operator<<(ostream& o, const MovableRectangle& mr)
{
	o<< "First member:" <<  mr.p1 << endl << "Second member:" << mr.p2 ;
}

