#include<iostream>
using namespace std;

int main() {
	int a = 0, Time = 0;
	cout << "�����������" << endl;
	cin >> a;
	while (a)
	{
		cout << a % 10;
		a /= 10;
		Time++;
	}
	cout << endl << "������λ��Ϊ��" << Time << endl;
	return 0;
}