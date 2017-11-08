#ifndef CLASSES_H
#define CLASSES_H

#include <bits/stdc++.h>
using namespace std;

const double PI =3.14159;
class Cartesian;

class Polar
{
	double radius;
	double theta;
		public:
			Polar(double x=0, double y=0);
			Polar operator+(Polar& a);
			Polar operator-(Polar& a);
			friend double angle(const Polar& a, const Polar& b);
			Cartesian toCartesian();
			friend void print(Polar);
};

class Cartesian
{
	double x;
	double y;
		public:
			Cartesian(double a=0,double b =0);
			Cartesian operator+ (Cartesian& a);
			Cartesian operator- (Cartesian& a);
			Polar toPolar();
			friend void print(Cartesian);
};


#endif