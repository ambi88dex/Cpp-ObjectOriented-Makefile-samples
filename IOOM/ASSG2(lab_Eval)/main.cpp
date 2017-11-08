#include "classes.h"

int main()
{
	cout<<"Enter the coefficient and the exponent of \
	the term to be used to initialize the polynomial"<<endl;
	double c;
	ll e;
	cin>> c>> e;
	Term first;
	if(c!=-1)
	{
		if(e!=-1)
		{
			first=Term(c,e);
		}
		else
		{
			first=Term(c);
		}
	}
	else
	{
		if(e!=-1)
		{
			first=Term(e);
		}
		else
		{
			first=Term();
		}
	}
	Polynomial P(first);
	cout<<"Enter total queries to be fired"<<endl;
	ll q;
	cin>>q;
	while(q--)
	{
		
		cout<<"To display content press 1,\
				To add a term press 2\
				To multiply a term press 3"<<endl;
		int choice;
		cin>>choice;
		 double coefficient;
		 ll exponent;
		switch(choice)
		{
			case 1:
			 break;

			case 2:
				cout<<"Enter the coefficient and exponent"<<endl;
				 cin>> coefficient;
				 cin>> exponent;
				P.addTerm(Term(coefficient,exponent));
				
			 break;

			case 3:
				cout<<"Enter the coefficient and exponent"<<endl;
				 cin>> coefficient;
				 cin>> exponent;
				P.multiply(Term(coefficient,exponent));
				
			 break;
		}
		P.display();

	}
	return 0;
}