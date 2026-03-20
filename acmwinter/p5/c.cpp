#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>f(110,vector<int>(110,0));
vector<int>in(110,0);
int n,member;
queue<int>out;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        while(1)
        {
            cin >> member;
            if(member==0)
            {
                break;
            }
            in[member]++;
            f[i][member]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(in[i]==0)
        {
            out.push(i);
        }
    }
    while(!out.empty())
    {
        int t=out.front();
        out.pop();
        cout << t << " ";
        for(int i=1;i<=n;i++)
        {
            if(f[t][i]==1)
            {
                in[i]--;
                if(in[i]==0)
            {
                out.push(i);
            }
            }
        }
    }
    return 0;
}