#include<bits/stdc++.h>
using namespace std;
int n,m,s,cnt=0,u,v,we;
struct EDGE
{
    int to;
    int w;
    int next;
};
struct P
{
    int num;
    int dist;
    bool operator <(const P &x)const
    {
        return x.dist < dist;
    }
};
vector<int>d(100010,1e9+1);
vector<EDGE>edge(200010);
vector<int>visited(100010,0);
vector<int>head(100010,-1);
priority_queue<P>len;
void add(int u,int v,int we)
{
    edge[cnt].to=v;
    edge[cnt].next=head[u];
    edge[cnt].w=we;
    head[u]=cnt++;
}
int main()
{
    cin >> n >> m >> s;
    for(int i=0;i<m;i++)
    {
        cin >> u >> v >>we;
        add(u,v,we);
    }
    d[s]=0;
    len.push({s,0});
    while(!len.empty())
    {
        P temp=len.top();
        len.pop();
        int x=temp.num;
        if(visited[x])
        {
            continue;
        }
        visited[x]=1;
        for(int i=head[x];i!=-1;i=edge[i].next)
        {
            int y=edge[i].to;
            if(d[y]>d[x]+edge[i].w)
            {
                d[y]=d[x]+edge[i].w;
            }
            if(!visited[y])
            {
                len.push({y,d[y]});
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}