#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
long long cnt_1=0,cnt_2=0;
vector<vector<int>>e(10010);
vector<int>color(10010,0);
bool cl(int u,int fa,int c)
{
        color[u]=c;
        if(c==1)
        {
            cnt_1++;
        }
        else
        {
            cnt_2++;
        }
    for(auto v:e[u])
    {
        if(v==fa)
        {
            continue;
        }
        if(color[v])
        {
        if(color[u]==color[v])
            {
                return false;
            }
        }
        else if(!cl(v,u,3-c))
            {
                return false;
            }
    }
    return true;
}
int main()
{
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        cin >> a >> b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    bool check=cl(1,-1,1);
    if(!check)
    {
        cout << "Impossible";
    }
    else
    {
        long long ans=min(cnt_1,cnt_2);
        cout << ans;
    }
    return 0;
}