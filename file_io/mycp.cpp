#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char*argv[])
{
#if 0
	if (argc != 3) {
		cout << "input error" << endl;
		exit(1);
	}

	char buf[409600];	

	ifstream file1(argv[1], ios::in|ios::binary);
	if (!file1.is_open()){
		cout << "open file1 filed!" << endl;
		exit(1);
	}
	ofstream file2(argv[2], ios::out|ios::binary|ios::trunc);
	if (!file2.is_open()){
		cout << "open file2 filed!" << endl;
		exit(1);
	}
		
	
	while(file1.peek() != EOF) {
		file1.read(buf, 409600);
		int n = file1.gcount();
//		cout << "n = " << n << endl;
		file2.write(buf, n);
	}

	file1.close();	
	file2.close();	
#endif

	char *p = new char[0x10000000];
	cout << hex << p << endl;
	cout << hex << *p << endl;
	cout << (char *)(p+0x10000000) << endl;
	cout << *(p+0x10000000) << endl;

	return 0;
}
