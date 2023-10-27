#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	if (a > b)
	{
		cout << a << ">" << b << endl;
	}
	if (a < b)
	{
		cout << a << "<" << b << endl;
	}
	else
	{
		cout << a << "=" << b << endl;
	}
	return 0;
}