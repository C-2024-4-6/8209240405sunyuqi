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
	cout << "���Լ��Ϊ��" << c << endl;
	cout << "��С������: " << d << endl;
}
int main1()
{
	int n = 0;
	int m = 0;
	cout << "������n��ֵ" << endl;
	cin >> n;
	cout << "������m��ֵ" << endl;
	cin >> m;
	swap(n, m);

	system("pause");
	return 0;
}