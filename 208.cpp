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
	cout << "请输入a的值" << endl;
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
			cout << "所求的平方根为  " << quzf(a) * x << endl;
			break;
		}
	}



	system("pause");
	return 0;
}