#include <iostream>
using namespace std;
#include "student.h"

int main()
{
#if 0
	Student s(20, 100, "XiaoLi");
	s.display();
#endif
#if 0
	Person *ps = new Student(21, 90, "XiaoWu");
	ps->display(); //编译时（函数）绑定,根据ps指针类型，在编译时去决定调用哪一个函数(跟指针类型对应)
	delete ps;
#endif
	//用子类指针指向父类对象,这是错误的，C++不允许子类指针指向父类对象
	//但强制类型转换可以，不过不要这么做,因为这样做不安全
	Student *ps = (Student*)new Person(20, "XiaoLi");
	ps->display();
	delete ps;

	return 0;
}
