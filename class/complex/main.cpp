#include "complex.h"
#include <iostream>
using namespace std;

int main(void)
{
	Complex a(1.6, 2.3), b(3.5, -2.3);
	Complex c = a+b, d;
#if 0
	a.real = 2.2;
	a.img  = 3.3;
#endif
	a.display();
	b.display();
	c.display();
	
	d = myadd(a, c);
	
	d.display();

	return 0;
}
