#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main(void)
{
	list<int> l(3);
	
	list<int>::iterator lit;
	int i = 0;

	for (lit = l.begin(); lit != l.end(); lit++, ++i)
		*lit = i+1;
	for (lit = l.begin(); lit != l.end(); lit++)
		cout << *lit << " ";
	cout << endl;
#if 0
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	vector<int>::iterator p;
	p = find(v.begin(), v.end(), 3);
	
	if (p != v.end())
		cout << *p << endl;

	p = find(v.begin(), v.end(), 9);
	
	if (p == v.end())
		cout << "24:not found!" << endl;

	p = find(v.begin()+1, v.end()-2, 3);
	if (p != v.end()-2)
		cout << "28:" << *p << endl;	

	int array[] = {10, 20, 30, 40};

	int *pp = find(array, array+4, 50);
		cout << *pp << endl;
#endif


	return 0;
}
