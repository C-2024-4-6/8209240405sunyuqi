#include<iostream>
using namespace std;
int main()
{

	char ch;
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "请输入一串字符" << endl;
	
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

	cout << "英文字母个数： " << a << endl;
	cout << "数字字符个数： " << b << endl;
	cout << "其他字符个数： " << c << endl;
	system("pause");
	return 0;
}