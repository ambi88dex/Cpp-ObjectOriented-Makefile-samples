#ifndef _COUNT_H
#define _COUNT_H

#include <bits/stdc++.h>
using namespace std;

// class IntWrapper;
// IntWrapper operator++(const IntWrapper& a,int);
// IntWrapper operator--(const IntWrapper& a,int);
// IntWrapper operator+(const IntWrapper& a,const IntWrapper& );
// IntWrapper operator+=(const IntWrapper& ,const IntWrapper&);
// ostream& operator<<(ostream& os, IntWrapper& a);


class IntWrapper
{
	int val;	
	public:
		IntWrapper(int ii=0);
		IntWrapper(const IntWrapper& );
		friend const IntWrapper operator++(IntWrapper& a,int);
		friend IntWrapper operator--(IntWrapper& a,int);
		friend IntWrapper operator+(const IntWrapper& a,const IntWrapper& );
		friend IntWrapper operator+=(const IntWrapper& ,const IntWrapper&);
		friend ostream& operator<<(ostream& os, IntWrapper& a);
};

#endif
