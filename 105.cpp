#include<iostream>
using namespace std;
int main()
{
	double f;
	cout << "请输入华氏度：" << endl;
	cin >> f;
	double i = (f - 32) * 5 / 9;
	cout << "摄氏度为：" << i << endl;
	system("pause");
	return 0;



}