#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "ÇëÊäÈëxµÄÖµ" << endl;
	cin >> x;
	if (0 < x&&x < 1)
	{
		cout << "y=" << 3 - 2 * x << endl;
	}
	else if (1 <= x&&x < 5)
	{
		cout << "y=" << 1 / (2 * x) + 1 << endl;
	}
	else if (5 <= x&&x< 10)
	{
		cout << "y=" << x * x << endl;

	}
	system("pause");
	return 0;
}