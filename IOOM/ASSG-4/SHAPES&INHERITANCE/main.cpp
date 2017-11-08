#include "figures.h"

int main()
{
	/*Shape* sptr;
	Circle c= Circle("red",0,2);
	sptr=&c;
	// cout << *((Circle*)sptr) << endl;
	// cout<< sptr->getArea() << endl;
	// cout<< sptr->getPerimeter() << endl;
	// cout << c << endl;
	// cout << sptr->getLength() << endl;

	Circle* cptr=(Circle*)sptr;
	cout << *(cptr) << endl;
	cout << cptr->getRadius() << endl;
	cout<< cptr->getPerimeter() << endl;
	cout << cptr->getArea() << endl;
		// cout<< sptr->getArea() << endl;
		// cout<< sptr->getPerimeter() << endl;

	Rectangle r=Rectangle("green",1,4,5);
	sptr=&r;

	Rectangle* rptr=(Rectangle*)sptr;
	cout << *(rptr) << endl;
	cout<< rptr->getArea() << endl;
	cout<< rptr->getPerimeter() << endl;
	// cout << r << endl;


	Square s=Square("blue",1,3);
	sptr=&s;
	
	Square* sqptr=(Square*)sptr;
	cout << *(sqptr) << endl;
	cout<< sqptr->getArea() << endl;
	cout<< sqptr->getPerimeter() << endl;

	sqptr=(Square*)&r;
	cout << sqptr->getSide() << endl;
	// cout << s << endl;*/

	// Circle c= Circle("red",0,2);
	Rectangle r=Rectangle("green",1,4,5);
	Circle c= Circle("red",0,2);
	// Shape& s=r;
	Shape* s=&c;

	Circle* cref=(Circle*)s;
	
	s=&r;
	cref=(Circle*)s;

	cout << *(cref) << endl;
	cout << cref->getPerimeter() << endl;




	return 0;

}