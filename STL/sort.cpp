#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include  <iterator>

using namespace std;


int main(void)
{
	ifstream in("name.txt");
	string strtmp;
	vector<string> vect;
	while (getline(in, strtmp, '\n'))
		vect.push_back(strtmp.substr(0, strtmp.find(' ')));
	sort(vect.begin(), vect.end());
	vector<string>::iterator it = unique(vect.begin(), vect.end());
//	copy(vect.begin(), it, ostream_iterator<string>(cout, "\n"));
	vector<string>::iterator ip;
	for(ip = vect.begin(); ip != it; ++ip)
		cout << *ip << endl;
	
	return 0;
}
