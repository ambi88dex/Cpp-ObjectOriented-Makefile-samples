#include "figures.h"

Shape::Shape( string c,  bool f):color(c),filled(f){}

void Shape::setColor( string s)
{
	color=s;
}

string Shape::getColor()
{
	return color;
}

void Shape::setFillStatus( bool f)
{
	filled=f;
}

bool Shape::isFilled()
{
	return filled;
}

Circle::Circle(string s, bool b,double d) :Shape(s,b),PI(3.1415),radius(d)
{
}

void Circle::setRadius(double d)
{
	radius=d;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return (PI*radius*radius);
}

double Circle::getPerimeter()
{
	return (2*PI*radius);
}

ostream& operator<<(ostream& o,  const Circle& a)
{
	o<<a.color<<" "<<a.filled<<" "<<a.radius;
	return o;
}


Quadrilateral::Quadrilateral(string s, bool b, double l, double w):Shape(s,b),length(l),width(w){}
Quadrilateral::~Quadrilateral(){}


Rectangle::Rectangle( string s,  bool b,  double l,  double w):Quadrilateral(s,b,l,w){}

void Rectangle::setLength( double l)
{
	length=l;
}

void Rectangle::setWidth( double w)
{
	width=w;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getArea()
{
	return length*width;
}

double Rectangle::getPerimeter()
{
	return 2*(	length+width);
}

ostream& operator<<(ostream& o, const Rectangle& a)
{
	o<<a.color<<" "<<a.filled<<" "<<a.length << " " << a.width;
	return o;
}

// Rectangle::~Rectangle()
// {
// 	~Quadrilateral();
// }

Square::Square( string s,  bool b,  double d):Quadrilateral(s,b,d,d){}

void Square::setSide( double d)
{
	length=d;
	width=d;
}

double Square::getSide()
{
	return length;
}

double Square::getArea()
{
	return length*length;
}

double Square::getPerimeter()
{
	return 4*length;
}
// Square::~Square()
// {
// 	~Quadrilateral();
// }

ostream& operator<<(ostream& o, const Square& a)
{
	o<<a.color<<" "<<a.filled<<" "<<a.length << " " << a.width;
	return o;
}