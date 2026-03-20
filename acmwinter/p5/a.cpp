#include<bits/stdc++.h>
using namespace std;
vector<int>fa(200010);
int n,m,op,u,v;
int find(int a)
{
    return fa[a]==a?a:fa[a]=find(fa[a]);
}
void check(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b)
    {
        cout << "Y\n";
    }
    else
    {
        cout << "N\n";
    }
}
void unit(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==y)
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
    while(m--)
    {
        cin >> op >> u >> v;
        if(op==1)
        {
            unit(u,v);
        }
        else
        {
            check(u,v);
        }
    }
    return 0;
}