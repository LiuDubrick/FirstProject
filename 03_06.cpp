#include<iostream>
using namespace std;

int main()
{
	float a, b, c, x1, x2;
	float delta;
	cout << "����������" << "һԪ���η�����a, b, c��ֵ��" << endl;
	cin >> a >> b >> c;
	if (!a)
	{
		cout << "�����еĶ�����ϵ��Ϊ0��" << endl;
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
		cout << "�����޸�" << endl;
	}
	return 0;
}