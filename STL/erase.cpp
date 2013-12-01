#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void)
{
//	vector<int>	v(10);
//	vector<int>::iterator it;

	list<int>	l(10);
	list<int>::iterator lit;

#if 0
	for (int i = 0; i < 10; i++)
		v[i] = i+1;

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
		cout << endl;
	
	it = v.begin() + 2;
	
	v.erase(it);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	it = v.begin();

	v.erase(it, it+2);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
#endif
	
	return 0;
}
