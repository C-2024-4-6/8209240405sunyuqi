#include<iostream>
using namespace std;
int main1()
{
	int num1, num2;
	cout << "请输入第一个数" << endl;
	cin >> num1;
	cout << "请输入第二个数" << endl;
 	cin >> num2;
	int a = num1;
	int b = num2;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	int c = a;
	int d = (num1 * num2) / c;
	cout << "最大公约数为；" << c << endl;
	cout << "最小公倍数: " << d << endl;

	system("pause");
		return 0;
}