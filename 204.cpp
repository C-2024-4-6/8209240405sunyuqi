#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "�������һ����" << endl;
	cin >> a;
	char p;
	cout << "�����������" << endl;
	cin >> p;
	int b;
	cout << "������ڶ�����" << endl;
	cin >> b;

	switch (p)
	{
	case'+':
		cout << "���=" << a + b << endl;
		break;
	case'-':
		cout << "���=" << a - b << endl;
		break;
	case'*':
		cout << "���=" << a * b << endl;
		break;
	case'/':
		if (b != 0)
		{
			cout << "���=" << a / b << endl;
		}
		else
		{
			cout << "��������Ϊ��" << endl;
		}
		break;
	case'%':
	
			if (b != 0)
			{
				cout << "���=" << a % b << endl;
			}
			else
			{
				cout << "��������Ϊ��" << endl;
			}
			break;
	}



	system("pause");
	return 0;
}