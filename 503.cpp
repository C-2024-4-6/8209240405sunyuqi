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
		
		cout << "体积=" << caculateV() << endl;
	}
};
int main()
{
	int a, b, c;
	cout << "请输入长：" << endl;
	cin >> a;
	cout << "请输入宽：" << endl;
	cin >> b;
	cout << "请输入高：" << endl;
	cin >> c;
	V p1;
	p1.setV(a, b, c);
	p1.showV();
	return 0;
}