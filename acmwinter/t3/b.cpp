#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>weight(n);
    vector<int>value(n);
    int val_max=0;
    for(int i=0;i<n;i++)
    {
        cin >> weight[i] >> value[i];
        val_max+=value[i];
    }
    vector<int>val_used(val_max+1,0);
    val_used[0]=1;
    vector<unsigned long long>dp(val_max+1,0);
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=val_max;j>=value[i];j--)
        {
            if(val_used[j-value[i]])
            {
            if(!val_used[j])
            {
            dp[j]=dp[j-value[i]]+weight[i];
            val_used[j]=1;
            }
            else
            {
            dp[j]=min(dp[j],dp[j-value[i]]+weight[i]);
            }
            }
        }
    }
    int res;
    for(int i=val_max;i>=0;i--)
    {
        if(dp[i]<=m&&val_used[i])
        {
            res=i;
            break;
        }
    }
    cout << res;
    return 0;
}