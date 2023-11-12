#include<iostream>
#include<string>
#include<iterator>
using namespace std;

int main()
{
	cout << "Enter your sentence:" << endl;
	string sentence;
	int i=0;
	getline(cin, sentence);
	string::iterator it = sentence.begin();
	for (; it < sentence.end(); it++)
	{
		if ((*it >= 'a') && (*it <= 'z'))
		{
			*it -= 32;
		}
		else if ((*it >= 'A') && (*it) <= 'Z')
		{
			*it += 32;
		}
	}
	cout << sentence;
	return 0;
}