#include<iostream>
using namespace std;
int main()
{
	cout << "�����������������" << endl;
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
