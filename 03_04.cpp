#include<iostream>
using namespace std;
int main()
{
	cout << "请输入金字塔的行数" << endl;
	int a = 0;
	cin >> a;
	for (int i=0; i<a; i++)
	{
		for (int y = 0; y < a - i; y++)
		{
			cout << " ";
	     }
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
