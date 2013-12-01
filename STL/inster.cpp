#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	int i , a[5] = {1, 2, 3, 4, 5};
	list<int> l(5, 0);
	
	cout << *l.begin() << endl;
	cout << *l.end() << endl;
#if 0
	for (i = 0; i < v.size(); i++)
		v[i] = i;
	v.at(4) = 100;
	for (i = 0; i < v.size(); i++)
		cout << v[i] << ",";
	cout << endl;
	vector<int> v2(a, a+5);
	v2.insert(v2.begin()+2, 13);
	for (i = 0; i< v2.size(); i++)
		cout << v2[i] << "," << endl;
	if (v > v2)
		cout << "v1 > v2" << endl;
	else 
		cout << "v1 < v2" << endl;
#endif

	return 0;
}
