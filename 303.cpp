#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius     Fahrenheit  |  Fahrenheit        Celsius " << endl;
	double a[] = { 40.0,39.0,31.0,};
	double b[] = { 120.0,110.0,30.0 };
	for (int i = 0; i < 3; i++)
	{
		cout << a[i] << "\t\t" << celsius_to_fah(a[i]) << "     |     " << b[i] << "      " << fahrenheit_to_cels(b[i]) << "\n";
			
	}
	system("pause");
	return 0;
}
