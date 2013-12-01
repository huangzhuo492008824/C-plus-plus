#include <fstream>
using namespace std;

int main()
{
	//用构造函数也可以打开文件
	//ofstream file("example.txt", ios::out | ios::trunc);
	//ofstream file("example.txt");
	
	//open函数打开文件
	ofstream file;
	file.open("example.txt", ios::out | ios::trunc);
	//file.open("example.txt");
	if(file.is_open())
	{
		file << "This is a line.\n";
		file << "This is another line.\n";
		file.close();
	}
	return 0;
}
