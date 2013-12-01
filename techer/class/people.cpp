#include "people.h"
#include <iostream>
using namespace std;
#if 1
People::People()
:age(10), name(NULL) //是初始化列表
{
	//构造函数体内的语句相当于赋值，比初始化列表的语句后执行
	cout << "People()" << endl;
	//age = 10;
	const char * myname = "XiaoWu";
	name = new char[strlen(myname)+1];
	strcpy(name, myname);
}
#endif
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
#if 1
People::People(int myage, const char *myname)
{
	cout << "ctor" << endl; //constructor
	age = myage;
	name = new char[strlen(myname)+1];
	strcpy(name, myname);
}
#endif

People::~People()
{
	cout << "dtor" << endl; //destructor
	this->display();
	delete[] name;
}
