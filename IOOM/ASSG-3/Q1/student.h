#ifndef _STUDENT_H
#define _STUDENT_H

#include <bits/stdc++.h>
using namespace std;

class Student
{
	
		char* name;
		int roll_no ;
		char* branch;
		public:
		Student(char* iname =NULL , int ir = -1, char* ib =NULL); 	
		Student(const Student&);
		~Student();
		void display_content();
		Student& operator=(const Student& obj);
		void* operator new(size_t);
		void operator delete(void*);
}; 

class List
{
	 
		int size;
		// static int successful;
		Student* head;
		public:
		List(int=0);
		~List();
		Student& operator[](int index);
};


#endif