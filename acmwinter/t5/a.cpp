#include<bits/stdc++.h>
using namespace std;
vector<int>fa(100010);
set<int>root;
struct EDGE
{
    int u;
    int v;
};
vector<EDGE>e(100010);
int cnt=0,n,m;
int find(int a)
{
    if(fa[a]==a)
    {
        return a;
    }
    else
    {
        return fa[a]=find(fa[a]);
    }
}
void unit(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        fa[a]=b;
    }
}
int main()
{
    cin >> n >> m;
    for(int i=0;i<=n;i++)
    {
        fa[i]=i;
    }
    for(int i=0;i<m;i++)
    {
        cin >> e[i].u >> e[i].v;
    }
    for(int i=0;i<m;i++)
    {
        if(find(e[i].u!=e[i].v))
        {
            unit(e[i].u,e[i].v);
        }
    }
    for(int i=1;i<=n;i++)
    {
        root.insert(find(i));
    }
    cnt=root.size();
    cout << cnt-1;
    return 0;
}