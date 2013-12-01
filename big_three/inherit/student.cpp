#include <iostream>
using namespace std;
#include "student.h"

Student::Student(int myage, int myscore, const char* myname)
:Person(myage, myname), score(myscore)
{
	cout << "student ctor(int, int, const char*)*" << endl;
}

Student::~Student()
{
	cout << "Student dtor"	<< endl;
}

void Student::display() const
{
	cout << "Student infl:" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "score: " << score << endl;
}
