#include <iostream> 
using namespace std;
#include "student.h" 

int main(void)
{
	Student s(20, 100, "XiaoWang");
	s.display();

	Student *ps = new Student(16, "xiaowang", 100);
	ps->display();
	delete ps;

	return 0;
}
