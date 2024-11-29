#include<iostream>
#include<string>
using namespace std;
int indexof(const string &s1,const string &s2)
{
	int len1 = s1.size();
	int len2 = s2.size();
	for (int i = 0; i <= len2-len1; i++)
	{
		int j=0;
		for (int j = 0; j < len1; j++)
		{
			if (s2[i + j] != s1[j])
			{
				break;
			}
		}
		if (j == len1)
		{
			return i;
		}
	}
	return -1;


}
int main()
{
	string s1, s2;
	cout << "Enter the first string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin >> s2;
	int index = indexof(s1, s2);
	if (index != -1)
	{
		cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << index << endl;
	}
	else
	{
		cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is -1" << endl;
	}


	system("pause");
	return 0;
}