#include<iostream>
using namespace std;
int main()
{

	int a = 2;
	int day = 1;
	double cost = 0.8 * 2;
	while (2*a <= 100)
	{
		a *= 2;
		cost += 0.8 * a;
		day++;
		

	}
	double Acost = cost / day;
	cout << "平均每天花" << Acost << "元" << endl;
	


	system("pause");
	return  0;
}




