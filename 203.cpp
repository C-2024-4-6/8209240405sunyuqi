#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "���������߳�" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		int d = a + b + c;
		cout << "�����ε��ܳ�Ϊ��" << d << endl;
		if (a == b || a == c || b ==c)
		{
			cout << "������Ϊ����������" << endl;

		}
		else
		{
			cout << "�����β��ǵ���������" << endl;

		}

	}
	else
	{
		cout << "���ܹ���������" << endl;
	}
	system("pause");
	return 0;

}