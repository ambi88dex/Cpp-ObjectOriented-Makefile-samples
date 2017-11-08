#include "classes.h"

double angle(const Polar& a, const Polar& b)
{
	return ((a.theta-b.theta)/PI)*180;
} 

void print(Polar a)
{
	cout<< a.radius << " " << a.theta << endl;
}

void print(Cartesian a)
{
	cout<< a.x << " " << a.y << endl;
}

Polar::Polar(double r,double t):radius(r),theta(t){}

Cartesian Polar::toCartesian()
{
	double x=radius*cos(theta);
	double y=radius*sin(theta);
	Cartesian temp=Cartesian(x,y);
	return temp; 
}

Polar Polar::operator+(Polar& a)
{
	Cartesian o1=this->toCartesian();
	Cartesian o2=a.toCartesian();
	// print(o1);
	// print(o2);
	Cartesian sum=o1+o2;
	// print(sum);
	Polar ret=sum.toPolar();
	return ret;
}

Polar Polar::operator-(Polar& a)
{
	Cartesian o1=this->toCartesian();
	Cartesian o2=a.toCartesian();
	Cartesian sum=o1-o2;
	Polar ret=sum.toPolar();
	return ret;
}


Cartesian::Cartesian(double i,double j):x(i),y(j){}

Polar Cartesian::toPolar()
{
	double rad=sqrt(x*x + y*y) ;
	double tt = atan2(y*1.0,x);
	// cout<< tt<< endl;
	tt=(tt/PI)*180;
	if (tt<0)
	{
		tt+=360;
	}
	Polar temp(rad,tt);
	return temp;
}

Cartesian Cartesian::operator+(Cartesian& a)
{
	double xx=this->x + a.x;
	double yy=this->y + a.y;
	Cartesian ret(xx,yy);
	return ret;
}

Cartesian Cartesian::operator-(Cartesian& a)
{
	double xx=this->x - a.x;
	double yy=this->y - a.y;
	Cartesian ret(xx,yy);
	return ret;
}









