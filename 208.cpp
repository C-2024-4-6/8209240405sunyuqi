#include<iostream>
#include<cmath>
using namespace std;
double jdz(double x)
{
	double h;
	if (x >= 0)
	{
		h = x;
	}
	else
	{
		h = -x;
	}
	return h;
}
int quzf(double x)
{
	if (x >= 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	double a = 0;
	cout << "������a��ֵ" << endl;
	cin >> a;
	double x = 1;
	x = (1.0 / 2) * (x + jdz(a) / x);
	for (int i = 0;; i++)
	{
		double m = x;
		x = (1.0 / 2) * (x + jdz(a) / x);
		double n = x;
		if (jdz(m - n) < pow(10, -5))
		{
			cout << "�����ƽ����Ϊ  " << quzf(a) * x << endl;
			break;
		}
	}



	system("pause");
	return 0;
}