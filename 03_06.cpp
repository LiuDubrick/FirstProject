#include<iostream>
using namespace std;

int main()
{
	float a, b, c, x1, x2;
	float delta;
	cout << "请依次输入" << "一元二次方程中a, b, c的值：" << endl;
	cin >> a >> b >> c;
	if (!a)
	{
		cout << "方程中的二次项系数为0！" << endl;
		return 0;
	}
	delta = b*b-4 * a * c;
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1=" << x1 << " " << "x2=" << x2 << endl;
	}
	else if (delta == 0)
	{
		x1 = x2 = -b / 2*a;
		cout << "x1=x2=" << x1 << endl;
	}
	else
	{
		cout << "方程无根" << endl;
	}
	return 0;
}