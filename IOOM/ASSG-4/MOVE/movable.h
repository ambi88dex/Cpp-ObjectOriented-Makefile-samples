#include <bits/stdc++.h>
using namespace std;

class Movable
{
	public:
		virtual void moveUp()=0;
		virtual void moveDown()=0;
		virtual void moveLeft()=0;
		virtual void moveRight()=0;
};

class MovablePoint: public Movable 
{
		int x;
		int y;
		int xSpeed;
		int ySpeed;
	public:
		MovablePoint(int = 0,int = 0,int = 0,int = 0);
		virtual void moveUp();
		virtual void moveDown();
		virtual void moveLeft();
		virtual void moveRight();
		friend ostream& operator<<(ostream&,const MovablePoint&);
		friend class MovableRectangle;
};	

class MovableRectangle: public Movable 
{
		MovablePoint p1;
		MovablePoint p2;
	public:
		MovableRectangle(int=0,int=0,int=0,int=0,int=0,int=0);
		void moveUp();
		void moveDown();
		void moveLeft();
		void moveRight();
		friend ostream& operator<<(ostream&,const MovableRectangle&);
};