#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>money(3);
    money[0]=1;
    money[1]=5;
    money[2]=11;
    int n;
    cin >> n;
    vector<int>dp(n+1,1e9);
    dp[0]=0;
    for(int i=0;i<3;i++)
    {
        for(int j=money[i];j<=n;j++)
        {
            dp[j]=min(dp[j],dp[j-money[i]]+1);
        }
    } 
    cout << dp[n];
    return 0;
}