#include <iostream>
using namespace std;
void bubbleSort(int arr[] )
{
	
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	
}
int main()
{
	int arr[] = { 1,3,5,4,6,2,9,7,8,10 };
	bubbleSort(arr);
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}