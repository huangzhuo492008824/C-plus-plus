#include <iostream>
#include <fstream>
using namespace std;

const char * filename = "example.txt";

int main(void)
{
	long l,m;
	char buf[100];

	ifstream file(filename, ios::in|ios::binary);
#if 0
	l = file.tellg();
	file.seekg(0, ios::end);
	m = file.tellg();
	file.close();
	cout << "size of" << filename;
	cout << " is " << (m-l) << "byte.\n";
#endif

	while (file.peek() != EOF) {
		file.getline(buf, 100);
		cout << buf << endl;
	}

	file.clear();
	file.seekg(0);

	while(file.peek() != EOF) {
		file.getline(buf, 100);
		cout << buf << endl;
	}
	file.close();
	
	return 0;
}
