#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Term
{
	public:
	//private:
		ll exponent;
		double coefficient;
	//public:
		Term();
		Term(ll exponent);
		Term(double coefficient);
		Term(double coefficient,ll exponent);
		void display();
		//bool compare(const Term& , const Term&);
};

class Polynomial
{
	public:
	//private:
		vector<Term>ls;
	//public:
		Polynomial(const Term&);
		void addTerm(const Term&);
		void multiply(const Term&);
		void display();
};