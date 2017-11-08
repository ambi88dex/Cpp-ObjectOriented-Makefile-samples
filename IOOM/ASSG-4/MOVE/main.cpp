#include "movable.h"

int main()
{
	MovablePoint mp(1,2,3,4);
	cout << "The movable point == ";
	cout << mp << endl;
	cout << endl;
	MovableRectangle mr(5,6,7,8,9,10);
	cout << "The movable rectangle == ";
	cout << mr << endl;
	cout << endl;

	cout << "Before any motion" << endl;
	cout << mp << endl;
	mp.moveUp();
	cout << "After moveUp(): ";
	cout << mp<< endl;
	mp.moveDown();
	cout << "After moveDown(): ";
	cout << mp<< endl;
	mp.moveLeft();
	cout << "After moveLeft(): ";
	cout << mp<< endl;
	mp.moveRight();
	cout << "After moveRight(): ";
	cout << mp<< endl;

	mr.moveUp();
	cout << "After moveUp(): ";
	cout << mr<< endl;
	mr.moveDown();
	cout << "After moveDown(): ";
	cout << mr<< endl;
	mr.moveLeft();
	cout << "After moveLeft(): ";
	cout << mr<< endl;
	mr.moveRight();
	cout << "After moveRight(): ";
	cout << mr<< endl;
	
	return 0;
}