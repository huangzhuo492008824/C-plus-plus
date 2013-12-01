#include <iostream>
#include <cstdio>
using namespace std;

typedef char mybool;

#define TRUE 1
#define FALSE 0

int main()
{
	bool cond = true;
	mybool cond2 = TRUE;
	cond2 = true;
	cond = TRUE;

	if(cond)
		cout << "condition is true" << endl;
	if(cond2)
		printf("condition2 is TRUE\n");

	return 0;
}
