#include "student.h"

Student::Student(char* in , int ir , char* ib)
{
	// cout<< "Student contructor"<<endl;
	if(in!=NULL)
	{
		name=new char[strlen(in)];
		strcpy(name,in);
	}
	else
	{
		name=NULL;
	}
	if(ib!=NULL)	
	{
		branch= new char[strlen(ib)];
		strcpy(branch, ib);
	}
	else
	{
		branch=NULL;
	}
	roll_no =ir;
}

Student::Student(const Student& a)
{
	strcpy(name,a.name);
	roll_no=a.roll_no;
	strcpy(branch,a.branch);
}

Student:: ~Student()
{
	delete[] name;
	delete[] branch;
}


void Student::display_content()
{
	cout<< name <<" "<< roll_no <<" "<< branch <<endl;
}

void* Student::operator new(size_t size)
{	
	void* p = malloc(size);
	// for(int i=0;i<size;i++)
	// {
	// 	p[i].name= new char[100];
	// 	p[i].branch= new char[100];
	// }
	return p;
}

void Student::operator delete(void* p)
{	
	// Student* q=(Student*)p;
	// for(int i=0;i<size;i++)
	// {
	// 	 delete[] q[i].name;
	// 	delete[] q[i].branch;
	// }
	free(p);
}


///////////////////////////////////////////////////////////////////////////////////////////


List::List(int sz):size(sz)
{
	head=new Student[sz];
}
List::~List()
{
	delete[] head;
	head=NULL;
}



Student& List::operator[](int index)
{
	// cout<< "list:operator[]"<<endl;
	if(index<size)
	{
		// cout << index << " "<< head[index].roll_no << endl;
		// printf("%s %s \n",head[index].name,head[index].branch);
		return head[index];
	}
	else
	{
		cout<<"Out of bound access" <<endl;
		return head[0];
	}
}

Student& Student::operator=(const Student& obj)
{
	// cout<<"Student::Operator= function"<<endl;
	// Student temp;
	// printf("%s %s\n",obj.name,obj.branch);
	if(obj.name!=NULL)
	{
		delete[] name;
		name = new char[strlen(obj.name)];
		strcpy(name,obj.name);	
	}
	// strcpy(temp.name,obj.name);
	roll_no=obj.roll_no;
	// temp.roll_no=roll_no;
	if(obj.branch!=NULL)
	{
		delete[] branch;
		branch = new char[strlen(obj.branch)];
		strcpy(branch,obj.branch);	
	}
	// strcpy(temp.branch,obj.branch);
	// cout<< "After branch if condition" << endl;
	return *this;
}