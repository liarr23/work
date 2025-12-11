#include<iostream>
using namespace std;
int main()
{
    int months[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int m,d;
    while(cin >> m >> d)
    {
        int sum_day=0;
        for(int i=0;i<m-1;i++)
        {
           sum_day+=months[i];
        }
        sum_day+=d;
        sum_day%=5;
        if(sum_day<=3&&sum_day>=1)
        {
            cout << "fish" << sum_day << "\n";
        }
        else
        {
            if(sum_day==0)
            {
                cout << "net" << "2" << "\n"; 
            }
            else
            {
                cout << "net" << "1" << "\n";
            }
        }
    }
    return 0;
}