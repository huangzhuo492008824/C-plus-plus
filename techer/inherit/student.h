#include "person.h"

class Student : public Person{
public:
	Student(int myage, int myscore, const char* myname);
	~Student();
	void display() const;

private:
	int score;
};
