#include <iostream>
using namespace std;

typedef int mybool;

#define TRUE 1
#define FAULSE 0

int main(void)
{
	bool cond = true;
	mybool cond2 = true;

	if (cond)
		cout << "The condition is true." << endl;
	if (cond2)
		cout << "cond2 is TRUE" << endl;

	return 0;
}
