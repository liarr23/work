#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,num,e;
struct EDGE
{
    int u;
    int v;
    int d;
    int num;
};
vector<int>fa(200);
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
bool cmp(EDGE a, EDGE b)
{
    return a.d < b.d;
}
int main()
{
    cin >> n;
    while(n--)
    {
        int uni=1;
        int res1=0;
        cin >> num >> e;
        vector<EDGE>edge(e);
        for(int i=0;i<e;i++)
        {
            cin >> edge[i].u >> edge[i].v >> edge[i].d;
            edge[i].num=i;
        }
        for(int i=0;i<=num;i++)
        {
            fa[i]=i;
        }
        vector<int>vis;
        sort(edge.begin(),edge.end(),cmp);
        int edge_count = 0;
        for(int i=0;i<e;i++)
        {
            if(find(edge[i].u)!=find(edge[i].v))
            {
                res1+=edge[i].d;
                unit(edge[i].u,edge[i].v);
                vis.push_back(edge[i].num);
                edge_count++;
            }
        }
        if(edge_count != num-1)
        {
            cout << "Not Unique!\n";
            continue;
        }
        for(int i=0;i<vis.size();i++)
        {
            for(int j=0;j<=num;j++)
            {
                fa[j]=j;
            }
            int res2=0;
            int new_edge_count = 0;
            for(int j=0;j<e;j++)
            {
                if(edge[j].num==vis[i])  
                {
                    continue;
                }
                if(find(edge[j].u)!=find(edge[j].v))
                {
                    res2+=edge[j].d;
                    unit(edge[j].u,edge[j].v);
                    new_edge_count++;
                }
            }
            if(new_edge_count == num-1 && res1==res2)
            {
                uni=0;
                break;
            }
        }
        if(uni)
        {
            cout << res1 << "\n";
        }
        else
        {
            cout << "Not Unique!\n";
        }
    }
    return 0;
}