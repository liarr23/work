#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a(4);
    for(int i=0;i<4;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=9;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
           sum+=a[j]^i;
        }
        cout << i << sum << "\n";
    }
}