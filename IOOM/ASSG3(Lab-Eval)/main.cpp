#include "classes.h"

int main()
{
	cout<<"Enter the number of testcases"<<endl;
	int t;
	cin>>t;
	while(t--)
	{
		cout<<"Enter the first point in the polar coordinate form"<<endl;
		double r,t;
		cin>>r >>t;
		t=(t/180)*PI;
		Polar o1=Polar(r,t);
		cout<<"Enter the second point in the polar coordinate form"<<endl;
		cin>>r >>t;
		t=(t/180)*PI;
		Polar o2=Polar(r,t);

		Polar sum=o1+o2; // o1.operator+(o2);
		Polar diff=o1-o2;

		print(sum);
		print(diff);
		cout << angle(o1,o2) << endl<<endl;
	}	


	return 0;
}