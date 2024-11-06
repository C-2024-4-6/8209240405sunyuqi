#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "请输入第一个数" << endl;
	cin >> a;
	char p;
	cout << "请输入运算符" << endl;
	cin >> p;
	int b;
	cout << "请输入第二个数" << endl;
	cin >> b;

	switch (p)
	{
	case'+':
		cout << "结果=" << a + b << endl;
		break;
	case'-':
		cout << "结果=" << a - b << endl;
		break;
	case'*':
		cout << "结果=" << a * b << endl;
		break;
	case'/':
		if (b != 0)
		{
			cout << "结果=" << a / b << endl;
		}
		else
		{
			cout << "除数不能为零" << endl;
		}
		break;
	case'%':
	
			if (b != 0)
			{
				cout << "结果=" << a % b << endl;
			}
			else
			{
				cout << "除数不能为零" << endl;
			}
			break;
	}



	system("pause");
	return 0;
}