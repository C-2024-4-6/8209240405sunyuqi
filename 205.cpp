#include<iostream>
using namespace std;
int main()
{

	char ch;
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "������һ���ַ�" << endl;
	
	while ((ch=cin.get())!='\n')
	{
		if (ch >= 'a' && ch <= 'z')
		{
			a++;
			
		}
		else if (ch >= 0 && ch <= 9)
		{
			b++;
			
		}
		else
		{
			c++;
			
	}
	
	}

	cout << "Ӣ����ĸ������ " << a << endl;
	cout << "�����ַ������� " << b << endl;
	cout << "�����ַ������� " << c << endl;
	system("pause");
	return 0;
}