#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++)
	{
		char c = hexString[i];
		int a;
		if (c >= '0' && c <= '9')
		{
			a = c - '0';

		}
		else if (c >= 'A' && c <= 'F')
		{

			a = c - 'A' + 10;
		}
		else if (c >= 'a' && c <= 'f')
		{

			a = c - 'a' + 10;
		}
		else
		{
			cout << "输入的不是有效的十六进制字符串" << endl;
			return - 1;

		}
		int weight = 1;
		for (int j = 0; j < len - i - 1; j++)
		{

			weight *= 16;
		}
		result += a * weight;
	}
	return result;

}
int main()
{
	string hexStr;
	cout << "请输入十六进制字符串:";
	cin >> hexStr;
	int q = parseHex(hexStr.c_str());
	if (q != -1)
	{
		cout << "转换为十进制为：" << q << endl;
	}



	system("pause");
	return 0;
}