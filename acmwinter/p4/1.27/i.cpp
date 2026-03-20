#include<bits/stdc++.h>
using namespace std;
int num,u,v,y;
vector<vector<int>>node(100001);
int len[100001];
void dfs(int u,int fa)
{
    for(int i=0;i<node[u].size();i++)
    {
        v=node[u][i];
        if(v==fa)
        {
            continue;
        }
        len[v]=len[u]+1;
        if(len[v]>len[y])
        {
            y=v;
        }
        dfs(v,u);
    }
}
int main()
{
    cin >> num;
    for(int i=0;i<num-1;i++)
    {
        cin >> u >> v;
        node[u].push_back(v);
        node[v].push_back(u);
    }
    dfs(u,0);
    int len1=y;
    memset(len,0,sizeof(len));
    y=len1;
    dfs(y,0);
    cout << len[y];
    return 0;
}