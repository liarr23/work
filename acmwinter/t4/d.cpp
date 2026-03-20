#include<bits/stdc++.h>
using namespace std;
int n,k,a,b,res=0;
vector<vector<int>>city(200010);
vector<int>depth(200010,0);
priority_queue<int>deep;
void dfs(int u,int fa)
{
    depth[u]=depth[fa]+1;
    deep.push(depth[u]-1);
    for(int i=0;i<city[u].size();i++)
    {
        int son =city[u][i];
        if(son==fa)
        {
            continue;
        }
        dfs(son,u);
    }
}
int main()
{
    cin >> n >> k;
    for(int i=0;i<n-1;i++)
    {
        cin >> a >> b;
        city[a].push_back(b);
        city[b].push_back(a);
    }
    dfs(1,0);
    for(int i=0;i<k;i++)
    {
        res+=deep.top();
        deep.pop();
    }
    cout << res;
    return 0;
}