#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
	int *p = (int *)malloc(sizeof(int));

	free(p);

	int *p2 = new int;
	cout << "*p2=" << *p2 << endl;
	delete p2;

	int *p3 = new int(10);
	cout << "*p3=" << *p3 << endl;
	cout << "p3=0x" << hex << p3 << endl;
	delete p3;
	cout << "p3=0x" << hex << p3 << endl;
	p3 = NULL;
	delete p3;
	
	int *p4 = new int[10];
	for (int i = 0; i < 10; ++i)
		p4[i] = i+1;
	for (int i = 0; i <10; ++i)
		cout << "p4[" << i << "]" <<endl;
	delete[] p4;
	cout << "p4=0x" << hex << p4  << endl << p4[5] << endl;

	return 0;
}
