#include<bits/stdc++.h>
using namespace std;
vector<int>color(2000010,0);
int num_w=0,n,a,b;
int num_b=0;
vector<int>used(2000010,0);
vector<vector<int>>tree(2000010);
void dfs(int u,int fa)
{
    used[u]=1;
    if(color[u]==0)
    {
        num_w++;
    }
    else
    {
        num_b++;
    }
    for(int i=0;i<tree[u].size();i++)
    {
        int son=tree[u][i];
        if(son==fa)
        {
            continue;
        }
        if(used[son])
        {
            continue;
        }
        if(color[son]!=color[u])
        {
            dfs(son,u);
        }
    }
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> color[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    dfs(1,0);
    int res=min(num_w,num_b);
    cout << res;
    return 0;
}