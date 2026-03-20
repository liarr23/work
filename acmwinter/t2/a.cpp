#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int money[5] ={100,20,10,5,1};
    int res=0;
    for(int i=0;i<5;i++)
    {
        while(n-money[i]>=0)
        {
            n=n-money[i];
            res++;
        }
        if(money==0)
        {
            break;
        }
    }
    cout << res;
    return 0;
}