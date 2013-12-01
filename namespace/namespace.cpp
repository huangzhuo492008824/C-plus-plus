#include <iostream>
using namespace std;

namespace A {
	int a;
	void goo(){cout << "A::goo" << endl;}
};

using namespace A;

namespace B {
	int a;
};
//using namespace B;

void goo(){cout << "goo" << endl;};

int main(void)
{
	int a;
	
	A::a = 1000;
	a = 10;
	cout<<"a="<<a<<endl;
	cout<<"A::a="<<A::a<<endl;
	cout << goo() << endl;
	cout << A::goo() << endl;
	
	return 0;
}
