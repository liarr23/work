#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 

    int n;
    cin >> n;
    
    vector<int> nums(n); 
    
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    stack<int> sta;
    vector<int> ans(n);
    
    for(int i = n - 1; i >= 0; i--)
    {
        while(!sta.empty() && nums[sta.top()] <= nums[i])
        {
            sta.pop();
        }
        
        if(sta.empty())
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = sta.top() + 1; 
        }
        
        sta.push(i);
    }
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " "; 
    }
    return 0;
}
