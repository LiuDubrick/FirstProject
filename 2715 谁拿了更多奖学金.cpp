#include<iostream>
using namespace std;

int main()
{
    int peoplenum=0,number=0,tempmoney=0;
    cin >> peoplenum;
    string name[101], ifleader[101],ifwest[101] ;
    string best;
    int endscore[101], classscore[101], papernum[101];
    int tmoney=0,maxmoney=0;
    for (int i=peoplenum; i>0;i--)
    {
        cin >> name[number] >> endscore[number] >> classscore[number] 
            >>ifleader[number] >> ifwest[number] >> papernum[number];
        number++;

    }
    for (number; number > 0; number--)
    {
        if ((endscore[number] > 80)&&(papernum[number]))
        {
            tempmoney += 8000;
        }

        if ((endscore[number] > 85) && (classscore[number]>80))
        {
            tempmoney += 4000;
        }
        if (endscore[number] > 90)
        {
            tempmoney += 2000;
        }
        if ((endscore[number] > 85) && (ifwest[number]=="Y"))
        {
            tempmoney += 1000;
        }
        if ((classscore[number] > 80)&&(ifleader[number]=="Y"))
        {
            tempmoney += 850;
        }
        if (tempmoney >= maxmoney)
        {
            maxmoney = tempmoney;
            best = name[number];
        }
        tmoney += tempmoney;
        tempmoney = 0;
    }
    cout <<endl<< best << endl << maxmoney << endl << tmoney;
    return 0;
}