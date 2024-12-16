#include<iostream>
using namespace std;
class Point
{
private:
	int X;
	int Y;
public:
	Point()
	{
		X = 60;
		Y = 80;
	}
	void setPoint(int i,int j)
	{
		X = 60 + i;
		Y = 80 + j;
	
		
	}
	void display()
	{
		cout << "(" << X << "," << Y << ")" << endl;
	}
};
	int main()
	{
		Point p;

		p.display();
		p.setPoint(12, 15);
		p.display();
		return 0;

	
	
	}


