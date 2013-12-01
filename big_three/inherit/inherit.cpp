#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;

Person::Person(int  myage, const char *myname)
:age(myage), name(NULL)
{
	cout << "ctor(innt ,const char *)*" << endl;
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
	cout << "age: "	<< age << endl;
	cout << "name: " << name << endl;
	
}
