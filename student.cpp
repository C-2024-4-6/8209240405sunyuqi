#include<iostream>
#include<string>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value(int n,const char*na,char s)
{
	num = n;
	for (int i = 0; i < 20; i++)
	{
		name[i] = na[i];
	}
	sex = s;
}