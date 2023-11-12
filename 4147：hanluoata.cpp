#include <iostream>//头文件
using namespace std;
void moveone(string original,string goal, int num)
{
    cout <<num<<":" << original << "->" << goal << endl;
}
void move(string original, string temp, string goal, int num)
{
    if(num==1)
    {
        moveone(original, goal, 1);
    }
    else
    {
        move(original, goal, temp, num - 1);
        moveone(original, goal, num);
        move(temp, original, goal, num - 1);
    }
}
int main()
{
    int number = 0;
    cout << "请输入层数：" << endl;
    cin >> number;
    move("A", "B", "C", number); 
    return 0;
}


