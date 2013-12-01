#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(void)
{
	char buffer[256];
	ifstream examplefile("example.txt");
	if(!examplefile.is_open())
	{
		cout << "Error opening file";
		exit(1);
	}
	while(!examplefile.eof()) //多读一次
//	while(examplefile.peek() != EOF)
	{
		examplefile.getline(buffer, 100);
		if(examplefile.good())
			cout << buffer << "==" << endl;
	}

	return 0;
}

