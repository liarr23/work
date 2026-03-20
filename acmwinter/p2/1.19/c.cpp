#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int blood,a1,a2;
        cin >> blood >> a1 >> a2;
        while(a1>0)
        {
            if(blood/2<10)
            {
                break;
            }
            else
            {
                a1--;
                blood=blood/2+10;
            }
        }
        while(a2>0)
        {
            blood-=10;
            a2--;
        }
        if(blood<=0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}