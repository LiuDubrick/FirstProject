#include<iostream>
#include<vector>
using namespace std;

long sequence(long n)//The function of Fibonacci sequence
{
	//cout << 0;
	if (n == 2||n==1)
	{
		return 1;
	}
	int value = sequence(n - 1) + sequence(n - 2);
	return value;
}

int main()
{
	long n,num;
	vector<long> numberbox;//Creat a numberbox to storage the number you entered
	cout << "请输入组数n，以及n个数列序号:" << endl;
	cin >> n;
	for (n; n > 0; n--)//circulate for enter
	{
		cin >> num;
		numberbox.push_back(num);
		num = 0;
	}
	cout << endl;
	auto it = numberbox.begin();//Iteration numberbox and caculate
	while (it != numberbox.end())
	{
		cout << sequence(*it) << endl;
		it++;
	}
	return 0;
}