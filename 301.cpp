#include<iostream>
using namespace std;
void swap(int n, int m)
{
	int a = n;
	int b = m;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	int c = a;
	int d = (n * m) / c;
	cout << "最大公约数为；" << c << endl;
	cout << "最小公倍数: " << d << endl;
}
int main1()
{
	int n = 0;
	int m = 0;
	cout << "请输入n的值" << endl;
	cin >> n;
	cout << "请输入m的值" << endl;
	cin >> m;
	swap(n, m);

	system("pause");
	return 0;
}