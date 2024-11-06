#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三边长" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		int d = a + b + c;
		cout << "三角形的周长为：" << d << endl;
		if (a == b || a == c || b ==c)
		{
			cout << "三角形为等腰三角星" << endl;

		}
		else
		{
			cout << "三角形不是等腰三角星" << endl;

		}

	}
	else
	{
		cout << "不能构成三角形" << endl;
	}
	system("pause");
	return 0;

}