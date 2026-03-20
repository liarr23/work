#include<bits/stdc++.h>
using namespace std;
int n,res=0,a,b,t;
struct point
{
    int x;
    int y;
    int num;
};
struct edge
{
    int u;
    int v;
    int d;
};
bool cmp(point a,point b)
{
    return a.x < b.x;
}
bool cmp2(point a,point b)
{
    return a.y < b.y;
}
bool cmp3(edge a,edge b)
{
    return a.d < b.d;
}
vector<int>fa(100010);
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
   cin >> n;
   vector<point>Ps_x(n);
   vector<point>Ps_y(n);
   for(int i=0;i<n;i++)
   {
       cin >> a >> b;
       Ps_x[i].x=a;
       Ps_x[i].y=b;
       Ps_x[i].num=i;
       Ps_y[i].x=a;
       Ps_y[i].y=b;
       Ps_y[i].num=i;
   }
   sort(Ps_x.begin(),Ps_x.end(),cmp);
   sort(Ps_y.begin(),Ps_y.end(),cmp2);
   for(int i=0;i<n;i++)
   {
    fa[i]=i;
   }
   vector<edge>e((n-1)*2);
   for(int i=0;i<n-1;i++)
   {
    e[i].d=Ps_x[i+1].x-Ps_x[i].x;
    e[i].u=Ps_x[i+1].num;
    e[i].v=Ps_x[i].num;
    e[i+n-1].d=Ps_y[i+1].y-Ps_y[i].y;
    e[i+n-1].u=Ps_y[i+1].num;
    e[i+n-1].v=Ps_y[i].num;
   }
   sort(e.begin(),e.end(),cmp3);
   for(int i=0;i<2*(n-1);i++)
   {
    if(find(e[i].u)==find(e[i].v))
    {
        continue;
    }
    else
    {
        res+=e[i].d;
        unit(e[i].u,e[i].v);
    }
   }
   cout << res;
   return 0;
}