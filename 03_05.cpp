#include<iostream>
using namespace std;

int main()
{
	int x = 0; double X = 0;
	int i = 0, max = 0, min = 0;
	int arr[100000000];//������������
	int sum = 0;
	arr[sum] = 2;
	sum++;
	arr[sum] = 3;
	sum++;//������2��3��������
	cout << "���������������Χ������������Сֵ����" << endl;
	cin >> min >> max;
	unsigned int count = 0;//ͳ�Ƽ������
	for (x = 5; x <= max; x += 2)//��5��ʼ��������
	{
		X = sqrt(x);
		for (i = 1; i < sum; i++)//���������������ж�
		{
			count++;
			if (x % arr[i] == 0)//�������ж�
			{
				break;
			}
			if (arr[i] > X)
			{
				i = sum;
				break;
			}
		}
		if (i == sum)//��������
		{
			arr[sum] = x;
			sum++;
		}
	}
	for (int j = 0; j < sum; j++)
	{
		cout << arr[j] << "\t ";
	}
	cout << endl <<"����������" <<sum << endl;
	cout << endl <<"���������"<<�� count << endl;
	return 0;
}