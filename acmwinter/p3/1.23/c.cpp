#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,b;
    long long mod;
    long long res=0;
    cin >> n >> m >> b >> mod;
    vector<int>coder(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin >> coder[i];
    }
    vector<vector<int>>dp(m+1,vector<int>(b+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int k=coder[i];k<=b;k++)
            {
                dp[j][k]+=dp[j-1][k-coder[i]];
                dp[j][k]%=mod;
            }
        }
    }
    for(int i=0;i<=b;i++)
    {
        res=(res+dp[m][i])%mod;
    }
    cout << res;
    return 0;
}