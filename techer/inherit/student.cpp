#include <iostream>
using namespace std;
#include "student.h"

//1.子类的构造函数只负责初始化子类扩展的数据score,父类的数据需要调用父类的构造函数去初始化
//2.创建一个子类对象时，会依次调用父类构造函数、子类构造函数。
//3.销毁一个子类对象时，析构函数的调用顺序和构造函数正好相反，先调用子类析构函数，再调用父类析构函数。
//4.即使在子类构造函数初始化列表中不去调用父类的构造函数，系统也会默认调用一个父类的无参构造函数去初始化父类的那部分数据。
Student::Student(int myage, int myscore, const char* myname)
:Person(myage, myname), score(myscore)
{
	//age = 100;//赋值是可以的
	cout << "Student ctor(int, int, const char*)" << endl;
}

Student::~Student()
{
	cout << "Student dtor" << endl;
}

void Student::display() const
{
	cout << "Student info:" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Score: " << score << endl;
}
