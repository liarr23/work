#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a < b;
}
int main()
{
    int n,w;
    cin >> n >> w;
    vector<int>cows(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> cows[i];
    }
    vector<int>remain(1<<n,0);
    vector<int>cnt(1<<n,1e9);
    cnt[0]=1;
    remain[0]=w;
    for(int i=0;i<=(1<<n)-1;i++)
    {
        for(int k=1;k<=n;k++)
        {
            if(i&(1<<(k-1)))
            {
                continue;
            }
            if(cows[k]<=remain[i]&&cnt[i|(1<<(k-1))]>=cnt[i])
            {
                remain[i|(1<<(k-1))]=max(remain[i|(1<<(k-1))],remain[i]-cows[k]);
                cnt[i|(1<<(k-1))]=cnt[i];
            }
            if(cows[k]>remain[i]&&cnt[i|((1<<(k-1)))]>=cnt[i])
            {
                remain[i|(1<<(k-1))]=max(remain[i|(1<<(k-1))],w-cows[k]);
                cnt[i|(1<<(k-1))]=cnt[i]+1;
            }
        }
    }
    cout << cnt[(1<<n)-1];
    return 0;
}