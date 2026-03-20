#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    vector<int>weight(n);
    vector<int>value(n);
    int max_g=0;
    map<int,vector<int>>groups;
    for(int i=0;i<n;i++)
    {
        int g;
        cin >> weight[i] >> value[i] >> g;
        max_g=max(max_g,g);
        groups[g].push_back(i);
    }
    vector<vector<int>>dp(max_g+1,vector<int>(m+1,0));
    for(int i=1;i<=max_g;i++)
    {
        for(int j=0;j<=m;j++)
        {
            dp[i][j]=dp[i-1][j];
            for(int k=0;k<groups[i].size();k++)
            {
                if(j>=weight[groups[i][k]])
                {
                dp[i][j]=max(dp[i][j],dp[i-1][j-weight[groups[i][k]]]+value[groups[i][k]]);
                }
            }
        }
    }
    cout << dp[max_g][m];
    return 0;
}