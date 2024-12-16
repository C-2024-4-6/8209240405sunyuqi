#include<iostream>
using namespace std;
class  Student
{
public:
	Student(int n, int s) :num(n), score(s) {}
	int num;
	int score;
	void max(Student* arr)
	{
		int mscore = arr[0].score;
		int c = 0;
		for (int i = 0; i < 5; i++)
		{
			if (arr[i].score > mscore)
			{
				mscore = arr[i].score;
				c = i;
			}
		}
		cout << "成绩最高的学号为：" << arr[c].num << endl;
	}

};
int main()
{
	Student s[5] = { Student(1,75),
	Student(2,87) ,
	Student(3,74),
	Student(4,89),
	Student(5,83) };
	Student* p = &s[0];
	
	s->max(p);
	return 0;

}