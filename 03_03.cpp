#include<iostream>
using namespace std;

int main()
{
	string day[]= { "һ","��", "��", "��", "��", "��", "��" };
	int a;
	cout << "�����������" << endl;
	cin >> a;
	cout << "����" << day[a % 7] << endl;
	return 0;
}