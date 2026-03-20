#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n+1);
    int max_num=0;
    for(int i=1;i<=n;i++)
    {
        cin >> nums[i];
        max_num=max(max_num,nums[i]);
    }
    vector<unsigned long long>dp(max_num+1,0);
    vector<unsigned long long>sum(max_num+1,0);
    for(int i=1;i<=n;i++)
    {
        sum[nums[i]]+=nums[i];
    }
    dp[1]=sum[1];
    for(int i=2;i<=max_num;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+sum[i]);
    }
    cout << dp[max_num];
    return 0;
}