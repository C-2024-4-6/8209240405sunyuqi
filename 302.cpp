#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num < 2)
	{
		return false;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
		return true;
	}
}
int main2()
{
	int num = 0;
	int a = 0;
	
	
	while (a < 200)
	{
		num++;
		if (is_prime(num))
		{
				cout << num << " ";
				a++;
				if (a % 10 == 0)
				{
					cout << endl;
				}
		}
	}
		
	
	

	system("pause");
	return 0;
}