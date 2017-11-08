#include "count.h"

int main()
{
	IntWrapper obj(1);
	IntWrapper obj3(20);
	cout << obj << endl;
	// cout << "obj done" << endl; 
	IntWrapper obj2= obj++ =obj3++;
	cout << obj << "," <<obj2 << endl;
	// cout << "obj2 done" << endl;
	obj--;
	IntWrapper sum= obj + obj2;
	// cout << "sum	 done" << endl;
	cout << sum <<"," << obj << "," << obj2 <<endl;

	return 0;
}