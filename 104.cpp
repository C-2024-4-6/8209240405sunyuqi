#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int  type:" << testUnint << endl;
		cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" <<fixed<< setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; 
	system("pause");
	return 0;




}