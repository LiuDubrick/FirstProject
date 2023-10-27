#include<iostream>
using namespace std;

int main() {
	int a = 0, Time = 0;
	cout << "请输入该整数" << endl;
	cin >> a;
	while (a)
	{
		cout << a % 10;
		a /= 10;
		Time++;
	}
	cout << endl << "该整数位数为：" << Time << endl;
	return 0;
}