#include<bits/stdc++.h>
using namespace std;
int n,m;
struct fight{
    int u;
    int v;
    int w;
};
bool cmp(fight a,fight b)
{
    return a.w > b.w;
}
vector<fight>cr(100010);
vector<int>fa(200010);
int find(int a)
{
    return fa[a]==a?a:fa[a]=find(fa[a]);
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
    for(int i=1;i<=2*n;i++)
    {
        fa[i]=i;
    }
    for(int i=0;i<m;i++)
    {
        cin >> cr[i].u >> cr[i].v >> cr[i].w;
    }
    sort(cr.begin(),cr.end(),cmp);
    for(int i=0;i<m;i++)
    {
        unit(cr[i].u+n,cr[i].v);
        unit(cr[i].v+n,cr[i].u);
        if(find(cr[i].u)==find(cr[i].u+n)||find(cr[i].v)==find(cr[i].v+n))
        {
            cout << cr[i].w;
            return 0;
        }
    }
    cout << 0;
    return 0;
}