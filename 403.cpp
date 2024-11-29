#include<iostream>
using namespace std;
int main()
{
	
	for(int num=1;num<=100;num++)
	{
		
		int count = 0;
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				count++;
			}
		}
		if (count % 2 == 1)
		{
			cout  << num << endl;
		}


	}


	system("pause");
	return 0;
}