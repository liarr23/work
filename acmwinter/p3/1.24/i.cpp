#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int len ;
        cin >> len;
        vector<int>money(len);
        for(int i=0;i<len;i++)
        {
            cin >> money[i];
        }
        sort(money.begin(),money.end());
        for(int i=1;i<money.size();i++)
        {
            vector<int>dp(money[i]+1,0);
            dp[0]=1;
            for(int j=0;j<i;j++)
            {
                for(int k=money[j];k<=money[i];k++)
                {
                    if(dp[k-money[j]])
                    {
                        dp[k]=1;
                    }
                }
            }
            if(dp[money[i]])
            {
                money.erase(money.begin()+i);
                i--;
            }
        }
        int len2=money.size();
        cout << min(len2,len) << "\n";
    }
    return 0;
}