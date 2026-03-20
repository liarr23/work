#include<bits/stdc++.h>
using namespace std;

int n, u, max_num = 0; 
unsigned long long sum[1000001];
unsigned long long sz[1000001];
unsigned long long depth[1000001];
vector<vector<int>> tree(1000001);

void dfs(int u, int fa)
{
    depth[u] = depth[fa] + 1;
    sum[1] += depth[u];
    sz[u] = 1;
    for (int i = 0; i < tree[u].size(); i++)
    {
        int v = tree[u][i]; 
        if (v == fa)
        {
            continue;
        }
        dfs(v, u);
        sz[u] += sz[v];
    }
}

void dfs2(int u, int fa)
{
    for (int i = 0; i < tree[u].size(); i++)
    {
        int v = tree[u][i]; 
        if (v == fa)
        {
            continue;
        }
        sum[v] = sum[u] - 2 * sz[v] + n;
        dfs2(v, u);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int v;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1, 0);
    dfs2(1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (sum[i] > sum[max_num])
        {
            max_num = i;
        }
    }
    cout << max_num;
    return 0;
}
