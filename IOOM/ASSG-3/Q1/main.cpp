#include "student.h"
int main()
{
	int t;
	cout<< "Enter the no.of Students" << endl;	
	cin>>t;
	// cout << "Hi"<<endl;
	List ls(t);
	// cout<< " size of the l array is" <<sizeof(ls) <<endl;
	for(int i=0;i<t;i++)
	{
		char bname[100];
		char bbranch[100];
		int r;
		// cin>> bname >> r >> bbranch;
		scanf("%s",bname);
		scanf("%d",&r);
		scanf("%s",bbranch);
		Student temp(bname,r,bbranch);
		// cout<< "Obj created" << endl;
		ls[i]=temp;	
		// cout<< "copying done" << endl;
	}
	cout << endl;
	cout << "Results are as follows: " <<endl;
	cout << endl;
	for(int i=0;i<t+1;i++)
	{
		ls[i].display_content();
	}
	return 0;
}

// int* a= new int [6];