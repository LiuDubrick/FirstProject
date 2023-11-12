#include<iostream>
using namespace std;

int main()
{
	long a, b;
	long x=0;
	cout << "请输入a和b的值" << endl;
	cin >> a >> b;
	if (a > b)
	{
		for (x; (a ^ (x + 1)) >= b; x--)
		{

		}
		cout << x + 1 << endl;
		x = 0;
	}
	if (a < b)
	{
		for (x; (a ^ x )< b; x++)
		{

		}
		cout << x - 1 << endl;
		x = 0;
	}
	else
	{
		cout << "1" << endl;
	}
	return 0;
}
