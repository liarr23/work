#include<bits/stdc++.h>
using namespace std;
int num,m,res,son;
vector<vector<int>>classes(301);
vector<vector<int>>dp(301,vector<int>(301,0));
vector<int>score(301);
vector<int>fa(301);
void dfs(int u) 
{
    for (int v: classes[u]) dfs(v);
    for (int v: classes[u]) 
    {
        for (int i = m; i >= 1; i--) 
        {
            for (int j = 1; j <= i; j++) 
            
            { 
                dp[u][i] = max(dp[u][i], dp[u][i - j] + dp[v][j]);
            }
        }
    }

    for (int i = m; i >= 1; i--) dp[u][i] = dp[u][i - 1] + score[u];
}

int main()
{
    cin >> num >> m;
    for(int i=1;i<=num;i++)
    {
        cin >> fa[i] >> score[i];
        if(fa[i])
        {
        classes[fa[i]].push_back(i);
        }
    }
        for (int u = 1; u <= m; u++) 
        {
        if (!fa[u]) 
        {
            dfs(u);
            for (int i = m; i >= 1; i--) 
            {
                for (int j = 1; j <= i; j++) 
                {
                    dp[0][i] = max(dp[0][i], dp[0][i - j] + dp[u][j]);
                }
            }
        }
    }
    cout << dp[0][m];
    return 0;
}