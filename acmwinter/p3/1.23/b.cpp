#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,alone;
    cin >> num >> alone;
    vector<int>m(num+1,alone*2);
    for(int i=1;i<=num;i++)
    {
        int t;
        cin >> t;
        m[i]=m[i-1]+t;
    }
    vector<int>mins(num+1);
    for(int i=1;i<=num;i++)
    {
        mins[i]=m[i];
        for(int j=1;j<=i;j++)
        {
            mins[i]=min(mins[i],mins[i-j]+m[j]);
        }
    }
    cout << mins[num]-alone;
}