#include <iostream>

class A
{
	public:
		A(int size):SIZE(size){};
		const int SIZE;
};

int main(void)
{
	A a(100);
	A b(200);

	return 0;
}
