#include <list>
#include <iterator>
#include <iostream>

using namespace std;

int main(void)
{
	list<char> l(5, '0');
	
	list<char>::iterator lp;

	for (lp = l.begin(); lp != l.end(); lp++)
		cout << *lp << " ";
	cout << endl;
	copy(l.begin(), l.end(), ostream_iterator<char>(cout, ","));
	cout << endl;

	return 0;
}
