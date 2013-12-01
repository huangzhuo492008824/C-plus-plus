#include <iostream>
using namespace std;

class A{
public:
	enum Color{Red=1, Black, Blue, White, Yellow};
	Color c;
	void set_color(A::Color newcolor) ;
};

void A::set_color(Color newcolor)
{
	c = newcolor;
}


int main(void)
{
	A a;
	a.set_color(A::Red);
	return 0;
}
