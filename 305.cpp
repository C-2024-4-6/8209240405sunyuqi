#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	for (int i = 1; i <10; i++)
	{
		
		a = (a + 1) * 2;
	}

	cout << "第一天猴子一共摘了" <<a<<"个桃子" <<endl;

	system("pause");
	return 0;
}