#include<iostream>
using namespace std;
int main1()
{
	int num1, num2;
	cout << "�������һ����" << endl;
	cin >> num1;
	cout << "������ڶ�����" << endl;
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
	cout << "���Լ��Ϊ��" << c << endl;
	cout << "��С������: " << d << endl;

	system("pause");
		return 0;
}