#include <bits/stdc++.h>
using namespace std;

class Shape
{
		string color;
		bool filled;		
	public:
		Shape( string,  bool);
		void setColor( string ="");
		string getColor();
		void setFillStatus( bool );
		bool isFilled();
		virtual double getArea()=0;
		virtual double getPerimeter()=0;
		friend ostream& operator<<( ostream& , const class Circle& c);
		friend ostream& operator<<( ostream& , const class Rectangle& c);
		friend ostream& operator<<( ostream& , const class Square& c);
};

class Circle : public Shape
{
		double radius;
		const double PI;
	public:
		Circle(string ="",bool =0 ,double =0);
		void setRadius( double =0);
		double getRadius();	
		double getArea();
		double getPerimeter();
		friend ostream& operator<<( ostream& , const Circle& c);	
};

class Quadrilateral: public Shape
{
	protected:
		double width;
		double length;
	public:
		virtual ~Quadrilateral()=0;
		Quadrilateral(string ="",bool =0 ,double =0,double=0);
};

class Rectangle : public Quadrilateral
{

	public:
		Rectangle( string ="",  bool =0 ,  double =0,  double =0);
		void setLength( double );
		double getLength();
		void setWidth( double );
		double getWidth();
		double getArea();
		double getPerimeter();
		friend ostream& operator<<( ostream& o,  const Rectangle& c);	
		// ~Rectangle();
};

class Square : public Quadrilateral
{
	public:
		Square( string ="",  bool =0 ,  double =0);
		void setSide( double);
		double getSide();
		double getArea();
		double getPerimeter();
		friend ostream& operator<<( ostream& o,   const Square& c);	
		// ~Square();
};

