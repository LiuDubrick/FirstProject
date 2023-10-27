#include<iostream>
using namespace std;

int main()
{
	int x = 0; double X = 0;
	int i = 0, max = 0, min = 0;
	int arr[100000000];//创建质数数组
	int sum = 0;
	arr[sum] = 2;
	sum++;
	arr[sum] = 3;
	sum++;//将质数2和3存入数组
	cout << "请输入遍历质数范围（请先输入最小值）：" << endl;
	cin >> min >> max;
	unsigned int count = 0;//统计计算次数
	for (x = 5; x <= max; x += 2)//从5开始遍历奇数
	{
		X = sqrt(x);
		for (i = 1; i < sum; i++)//调用数组质数以判断
		{
			count++;
			if (x % arr[i] == 0)//非质数判断
			{
				break;
			}
			if (arr[i] > X)
			{
				i = sum;
				break;
			}
		}
		if (i == sum)//质数存入
		{
			arr[sum] = x;
			sum++;
		}
	}
	for (int j = 0; j < sum; j++)
	{
		cout << arr[j] << "\t ";
	}
	cout << endl <<"质数个数：" <<sum << endl;
	cout << endl <<"计算次数："<<： count << endl;
	return 0;
}