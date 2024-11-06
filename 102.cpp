#include<iostream>
using namespace std;
const double pi = 3.1415926;
int main()
{
	double r, h;
	cout << "请输入底面半径" << endl;
	cin >> r;
	cout << "请输入高" << endl;
	cin >> h;
	double v = (h * pi * r * r) / 3;
	cout << "圆锥的体积为：" << v << endl;
	system("pause");
	return 0;


}