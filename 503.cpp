#include<iostream>
using namespace std;
class V
{
private:
	int length;
	int width;
	int height;
public:
	void setV(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}
	int caculateV()
	{
		return length * width * height;
	}
	void showV()
	{
		
		cout << "���=" << caculateV() << endl;
	}
};
int main()
{
	int a, b, c;
	cout << "�����볤��" << endl;
	cin >> a;
	cout << "�������" << endl;
	cin >> b;
	cout << "������ߣ�" << endl;
	cin >> c;
	V p1;
	p1.setV(a, b, c);
	p1.showV();
	return 0;
}