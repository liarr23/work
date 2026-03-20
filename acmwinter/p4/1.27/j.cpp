#include<bits/stdc++.h>
using namespace std;

int n, m, root, u, v, res;
vector<vector<int>>tree(500001);
int depth[500001];
int jump[500001][22];

void dfs(int u, int fa) {
    depth[u] = depth[fa] + 1;
    jump[u][0] = fa;
    for(int i = 1; i <= 20; i++) {
        jump[u][i] = jump[jump[u][i-1]][i-1];   
    }
    for(int i = 0; i < (int)tree[u].size(); i++) {
        v = tree[u][i];
        if(v == fa) {
            continue;
        }
        dfs(v, u);
    }
}

int lca(int a, int b) {
    if(depth[a] < depth[b]) {
        swap(a, b);
    }
    for(int i = 20; i >= 0; i--) {
        if(depth[jump[a][i]] >= depth[b]) {
            a = jump[a][i];
        }
    }
    if(a == b) {
        return a;
    }
    for(int i = 20; i >= 0; i--) {
        if(jump[a][i] != jump[b][i]) {
            a = jump[a][i];
            b = jump[b][i];
        }
    }
    return jump[a][0];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m >> root;
    for(int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    dfs(root, 0);
    
    while(m--) {
        cin >> u >> v;
        res = lca(u, v);
        cout << res << '\n'; 
    }
    
    return 0;
}