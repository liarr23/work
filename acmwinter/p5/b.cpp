#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,we,cnt=0;
unsigned long long res=0;
struct EDGE
{
    int u;
    int v;
    int w;
};
vector<int>fa(5010);
bool cmp(EDGE &x,EDGE &y)
{
    return x.w < y.w;
}
int find(int x)
{
    if(x==fa[x])
    {
        return x;
    }
    else
    {
        return fa[x]=find(fa[x]);
    }
}
void unit(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b)
    {
        return ;
    }
    fa[b]=a;
}
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    vector<EDGE>edge(m);
    for(int i=0;i<m;i++)
    {
        cin >> a >> b >> we;
        edge[i].u=a;
        edge[i].v=b;
        edge[i].w=we;
    }
    sort(edge.begin(),edge.end(),cmp);
    for(int i=0;i<m;i++)
    {
        if(find(edge[i].u)==find(edge[i].v))
        {
            continue;
        }
        else
        {
            res+=edge[i].w;
            unit(edge[i].u,edge[i].v);
            cnt++;
        }
    }
    if(cnt==n-1)
    {
    cout << res;
    }
    else
    {
        cout << "orz";
    }
    return 0;
}