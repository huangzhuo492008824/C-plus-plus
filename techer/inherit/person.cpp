#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;

Person::Person()
:age(0), name(NULL)
{
	cout << "Person ctor()" << endl;
	name = new char[strlen("noname")+1];
	strcpy(name, "noname");
}

Person::Person(int myage, const char* myname)
:age(myage), name(NULL)
{
	cout << "Person ctor(int, const char*)" << endl;
	name = new char[strlen(myname)+1];
	strcpy(name, myname);
}

Person::~Person()
{
	cout << "Person dtor" << endl;
	delete[] name;
}

void Person::display() const
{
	cout << "Person info:" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}
