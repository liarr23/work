#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin >> n >> k >> x;
    vector<int>nums(n);
    int t=1;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
        while(nums[i]/t>=2)
        {
            t*=2;
        }
    }
    while()
}