#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 

    int n;

    while(cin >> n)
    {
    if(n==0)
    {
        break;
    }
    vector<int> nums(n); 
    
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    stack<int> sta;
    stack<int> sta2;
    vector<int> ans(n);
    vector<int> ans2(n);
    for(int i = n - 1; i >= 0; i--)
    {
        while(!sta.empty() && nums[sta.top()] >= nums[i])
        {
            sta.pop();
        }
        
        if(sta.empty())
        {
            ans[i] = n;
        }
        else
        {
            ans[i] = sta.top(); 
        }
        
        sta.push(i);
    }
    for(int i = 0; i < n; i++)
    {
        while(!sta2.empty() && nums[sta2.top()] >= nums[i])
        {
            sta2.pop();
        }
        
        if(sta2.empty())
        {
            ans2[i] = -1;
        }
        else
        {
            ans2[i] = sta2.top(); 
        }
        
        sta2.push(i);
    }
    long long maxs=0;
    for(int i = 0; i < n; i++)
    {
        long long width=ans[i]-ans2[i]-1;
        long long hi=nums[i];
        maxs=max(maxs,width*hi);
    }
    cout << maxs << "\n";
}
    return 0;
}
