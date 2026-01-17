#include<bits/stdc++.h>
using namespace std;
int coinnum(vector <int>*coins,int amount)
{
    vector <int> dp(amount+1,INT_MAX);
    dp[0]=0;
    int num=coins->size();
    for(int i=0;i<num;i++)
    {
        for(int j=coins->at(i);j<=amount;j++)
        {
            if(dp[j-coins->at(i)]!=INT_MAX)
            {
                dp[j]=min(dp[j],dp[j-coins->at(i)]+1);
            }
        }
    }
    return dp[amount]==INT_MAX?-1:dp[amount];
}
int main()
{
    vector <int> coins;
    int n,amount;
    int nums;
    cin >> amount >> nums;
    for(int i=0;i<nums;i++)
    {
        cin>>n;
        coins.push_back(n);
    }
    cout<<coinnum(&coins,amount)<<endl;
    return 0;
}