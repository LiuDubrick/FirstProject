#include<iostream>
using namespace std;

int main()
{
	string day[]= { "一","二", "三", "四", "五", "六", "日" };
	int a;
	cout << "请输入该整数" << endl;
	cin >> a;
	cout << "星期" << day[a % 7] << endl;
	return 0;
}