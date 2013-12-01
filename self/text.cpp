#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

//truc 和app是互斥的，不能同时出现
//ate可以和truc在一起出现，

int main(void)
{
	fstream file;

	file.open("test.txt", ios::in| ios::out | ios::ate);
	if (!file.is_open())
	{
		cerr << "file open error!" << endl;
		exit(1);
	}
	file << "abcd";
	file << "e";
	file << "f";
	
	file.close();
	
	return 0;
}

