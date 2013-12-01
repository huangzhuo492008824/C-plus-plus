#include "people.h"
#include <iostream>
using namespace std;

void People::display() const
{
	cout << "People info:" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

void People::talk()
{
	cout << "How do you do" << endl;
}

void People::display(const People& a) const
{
	cout << "Another People info:" << endl;
	cout << "Name: " << a.name << endl;
	cout << "Age: " << a.age << endl;
}

#if 0
People::People(int myage, const char *myname)
{
	cout << "ctor"	<< endl;
	age = myage;
	name = new char [strlen(myname)+1];
	strcpy(name, myname);
}

People::People()
{
	age = 10;
	name = new char[strlen("Xiao Wu")+1];
	strcpy(name, "Xiao Wu");
}



People::~People()
{
	cout <<  "dtor" << endl;
	delete[] name;
}
#endif
