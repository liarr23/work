#include<bits/stdc++.h>
using namespace std;
int n, m, b, a;
long long ans = 0;
vector<int> color(100010, 0);
vector<vector<int>> point(100010);
bool dfs(int u, int fa, int c, long long& cnt1, long long& cnt2) 
{
    color[u] = c;
    if(c == 1) 
    {
        cnt1++;
    }
    else 
    {
        cnt2++;
    }
    for(int i = 0; i < point[u].size(); i++) 
    {
        int v = point[u][i];
        if(v == fa) 
        {
            continue;
        }        
        if(color[v]) 
        {
            if(color[v] == c) 
            {
                return false;
            }
        } 
        else if(!dfs(v, u, 3-c, cnt1, cnt2)) 
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    cin >> n >> m;    
    for(int i = 0; i < m; i++) 
    {
        cin >> a >> b;
        point[a].push_back(b);
        point[b].push_back(a);
    }
    long long cnt1 = 0, cnt2 = 0;
    bool check = dfs(1, 0, 1, cnt1, cnt2);
    if(check) 
    {
        ans = 1LL * cnt1 * cnt2;
    }
    else 
    {
        ans = 1LL * n * (n - 1) / 2;
    }
    cout << ans - m ;
    return 0;
}