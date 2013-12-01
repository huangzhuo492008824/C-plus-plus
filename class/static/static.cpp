#include <iostream>
using namespace std;

class A{
public:
		static int i;
		static void foo(){cout};
};

int A::i;

int main(void)
{
	A a;
	
	cout << "sizeof(a)=" << sizeof(a) << endl;
	a.i = 10;
	cout << "a.i=" << a.i << endl;

	return 0;
}
