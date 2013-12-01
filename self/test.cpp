#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
	char buf[100];

	fstream file;
	file.open("test.txt", ios::in | ios::binary);
	if(!file.is_open())
	{
		cerr << "file open error!" << endl;
		exit(1);
	}
	file.read(buf, 100);
	int n = file.gcount();
	buf[n] = '\0';
	cout << "buf=" << buf << ", n=" << n << endl;

	file.close();

	return 0;
}

