#include "classes.h"

bool compare(const Term& a, const Term& b)
{
	if(a.exponent<b.exponent)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Term::Term()
{
	exponent=0;
	coefficient=0;
}

Term::Term(ll exponent)
{
	this->exponent=exponent;
	this->coefficient=1;
}

Term::Term(double coefficient)
{
	this->exponent=0;
	this->coefficient=coefficient;
}

Term::Term(double coefficient,ll exponent)
{
	this->exponent=exponent;
	this->coefficient=coefficient;
}

void Term::display()
{
	printf("The coefficient,exponent pair is (%lf,%lld)\n",coefficient,exponent);
}

Polynomial::Polynomial(const Term& obj)
{
	ls.push_back(obj);
}


void Polynomial::addTerm(const Term& obj)
{
	int getIndex=upper_bound(ls.begin(),ls.end(),obj,compare)-ls.begin();
	ls.insert(ls.begin()+getIndex,obj);
}

void Polynomial::multiply(const Term& obj) // Term
{
	for(ll i=0;i<ls.size();i++)
	{
		ls[i].exponent+=obj.exponent;
		ls[i].coefficient*=obj.coefficient;
	}
}

void Polynomial::display()
{
	cout<<"The elements present in the Polynomial are"<<endl;
	for(ll i=0;i<ls.size();i++)
	{
		printf("(%lf,%lld) ",ls[i].coefficient,ls[i].exponent);
	}
	cout<<endl;
}