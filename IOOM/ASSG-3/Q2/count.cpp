#include "count.h"

IntWrapper::IntWrapper(int ii):val(ii)
{
	
}

IntWrapper::IntWrapper(const IntWrapper& a)
{
	val=a.val;
}

// IntWrapper operator=(const IntWrapper& a)
// {
// 	strcpy(name,a.name);
// 	roll_no= a.roll_no;
// 	strcpy(branch,a.branch);
// 	return *this;
// }

const IntWrapper operator++(IntWrapper& a,int x)
{
	IntWrapper temp;
	temp.val=a.val;
	a.val++;
	return temp;
}

IntWrapper operator--(IntWrapper& a,int x)
{
	IntWrapper temp;
	temp.val=a.val;
	a.val--;
	return temp;
}

IntWrapper operator+(const IntWrapper& a,const IntWrapper& b)
{
	IntWrapper temp;
	temp.val=a.val + b.val;
	return temp;
}

IntWrapper operator+=(const IntWrapper& a, const IntWrapper& b)
{
	return a+b;
}

ostream& operator<<(ostream& os, IntWrapper& a)
{
	os<<a.val;
	return os;
}