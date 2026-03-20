#include<bits/stdc++.h>
using namespace std;
int n,m,u,v,w;
vector<vector<int>>dist(101,vector<int>(101,1e9));
int main()
{
    cin >> n >> m ;
    for(int i=1;i<=n;i++)
    {
        dist[i][i]=0;
    }
    for(int i=0;i<m;i++)
    {
        cin >> u >> v >> w;
        dist[u][v]=min(dist[u][v],w);
        dist[v][u]=min(dist[v][u],w);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}