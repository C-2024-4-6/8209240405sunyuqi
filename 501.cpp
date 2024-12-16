#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	Time()
	{

	}
	Time(int h, int m, int s)
	{
		hour = h;
		minute = m;
		sec = s;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1(12, 13, 12);
	t1.showTime();

	return 0;



}
