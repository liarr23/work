#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
typedef long long ll;

int n, m, a[301], fa[301], f[301][301];
vector<int> e[301];

void dfs(int u) {
    for (int v: e[u]) dfs(v);
    for (int v: e[u]) {
        for (int i = m; i >= 1; i--) {
            for (int j = 1; j <= i; j++) { // 第 v 个节点选许多 j 门课的得分
                f[u][i] = max(f[u][i], f[u][i - j] + f[v][j]);
            }
        }
    }

    for (int i = m; i >= 1; i--) f[u][i] = f[u][i - 1] + a[u];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> fa[i] >> a[i];
        if (fa[i]) e[fa[i]].push_back(i);
    }


    for (int u = 1; u <= n; u++) {
        if (!fa[u]) {
            dfs(u);
            for (int i = m; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    f[0][i] = max(f[0][i], f[0][i - j] + f[u][j]);
                }
            }
        }
    }

    cout << f[0][m] << endl;
    return 0;
}