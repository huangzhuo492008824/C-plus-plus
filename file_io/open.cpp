#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
	fstream file;
	file.open("test.txt", ios::in|ios::out|ios::app);
	if(!file.is_open())
	{
		cerr << "file open error" << endl;
		exit(1);
	}
	file << "abcd";
	file << "e";
	file << "f";
	
	file.close();
	return 0;
}

