#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (list1[i] < size1 && list2[j] < size2)
	{
		if (list1[i] < list2[j])
		{
			list3[k++] = list1[i++];
		}
		else
		{
			list3[k++] = list2[j++];
		}

		while (i < size1)
		{
			list3[k++] = list1[i++];
		}
		while (j < size2)
		{
			list3[k++] = list2[j++];
		}
	}



}
int main12()
{
	int list1[5];
	int list2[4];
	int list3[9];
	int size1=5;
	int size2=4;
	cout << "Enter list1:";
	for (int i = 0; i < 5; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	for (int i = 0; i < 4; i++)
	{

		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is";
	for (int i = 0; i < 9; i++)
	{
		cout << list3[i];
	}
		

	system("pause");
	return 0;
}

