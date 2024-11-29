#include<iostream>
using namespace std;
int main()
{
	int disnum[10];
	int count = 0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		bool isDistinct = true;
		for (int j = 0; j < count; j++)
		{
			if (disnum[j] == num)
			{
				isDistinct = false;
				break;
			}
		}
		if (isDistinct)
		{
			disnum[count++] = num;
			
		}
		
	}

	cout << "The distinct numbers:";
	for (int i = 0; i < count; i++)
	{
		cout << disnum[i] << " ";
	}

	system("pause");
	return 0;
}