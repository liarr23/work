#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>stones(n*2+1);
    vector<int>pre_stone(n*2+1,0);
    vector<vector<int>>dp_min(n*2+1,vector<int>(n*2+1,1000000000));
    vector<vector<int>>dp_max(n*2+1,vector<int>(n*2+1));
    for(int i=1;i<=n;i++)
    {
        cin >> stones[i];
        stones[n+i]=stones[i];
        dp_min[i][i]=0;
        dp_max[i][i]=0;
        dp_min[i+n][i+n]=0;
        dp_max[i+n][i+n]=0;
    }
    for(int i=1;i<=2*n;i++)
    {
        pre_stone[i]=pre_stone[i-1]+stones[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int len=1;len<=n;len++)
        {
            for(int l=1;l+len-1<=n*2;l++)
            {
                int r=l+len-1;
                for(int k=l;k<r;k++)
                {
                    dp_min[l][r]=min(dp_min[l][r],dp_min[l][k]+dp_min[k+1][r]+pre_stone[r]-pre_stone[l-1]);
                    dp_max[l][r]=max(dp_max[l][r],dp_max[l][k]+dp_max[k+1][r]+pre_stone[r]-pre_stone[l-1]);
                }
            }
        }
    }
    int res_min=dp_min[1][n];
    int res_max=dp_max[1][n];
    for(int i=2;i<=n;i++)
    {
        res_min=min(res_min,dp_min[i][i+n-1]);
        res_max=max(res_max,dp_max[i][i+n-1]);
    }
    cout << res_min << "\n" << res_max;
    return 0;
}