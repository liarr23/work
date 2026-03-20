#include<bits/stdc++.h>
using namespace std;
int n,m,u,v,num;
vector<vector<int>>workers(100010);
int jump[100010][22];
int depth[100010];
void dfs(int u,int fa)
{
    depth[u]=depth[fa]+1;
    jump[u][0]=fa;
    for(int i=0;i<workers[u].size();i++)
    {
        int son=workers[u][i];
        if(son==fa)
        {
            continue;
        }
        jump[son][0]=u;
        for(int j=1;j<22;j++)
        {
            jump[son][j]=jump[jump[son][j-1]][j-1];
        }
        dfs(son,u);
    }
}
int lca(int a,int b)
{
    if(depth[a]<depth[b])
    {
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=21;i>=0;i--)
    {
        if(depth[jump[a][i]]>=depth[b])
        {
            a=jump[a][i];
        }
    }
    if(a==b)
    {
        return a;
    }
    for(int i=21;i>=0;i--)
    {
        if(jump[a][i]!=jump[b][i])
        {
            a=jump[a][i];
            b=jump[b][i];
        }
    }
    return jump[a][0];
}
int main()
{
    cin >> n;
    for(int i=2;i<=n;i++)
    {
        cin >> u;
        workers[u+1].push_back(i);
        workers[i].push_back(u+1);
    }
    dfs(1,0);
    cin >> m;
    while(m--)
    {
        cin >> num;
        queue<int>join;
        for(int i=0;i<num;i++)
        {
            int w;
            cin >> w;
            join.push(w+1);
        }
        while(num!=1)
        {
            num--;
            int a=join.front();
            join.pop();
            int b=join.front();
            join.pop();
            int c=lca(a,b);
            join.push(c);
        }
        int res=join.front();
        int max_res=res;
        while(jump[res][0]!=0)
        {
            max_res=max(max_res,jump[res][0]);
            res=jump[res][0];
        }
        cout << max_res-1 << "\n";
    }
    return 0;
}