#include<bits/stdc++.h>
using namespace std;

int r,c,k;
int start_x,start_y; 
int moves[1005];
bool visited[1005][55][55];  // 改为bool类型更清晰
int dx[4] = {-1, 0, 1, 0};   // 北、东、南、西
int dy[4] = {0, 1, 0, -1};
bool maps[55][55] = {false};

void dfs(int steps_left, int x, int y) {
    if(visited[steps_left][x][y]) return;
    visited[steps_left][x][y] = true;
    
    if(steps_left == 0) return;
    
    int dir = moves[steps_left];
    int nx = x, ny = y;
    
    // 沿着该方向一直走直到撞墙
    while(true) {
        nx += dx[dir];
        ny += dy[dir];
        
        // 检查边界和可通行性
        if(nx < 0 || nx >= r || ny < 0 || ny >= c || !maps[nx][ny]) {
            break;
        }
        
        dfs(steps_left - 1, nx, ny);
    }
}

int main() {
    cin >> r >> c;
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            char ch;
            cin >> ch;
            if(ch == '.' || ch == '*') {
                maps[i][j] = true;
            }
            if(ch == '*') {
                start_x = i;
                start_y = j;
            }
        }
    }
    
    cin >> k;
    for(int i = k; i > 0; i--) {
        string dir;
        cin >> dir;
        if(dir == "NORTH") moves[i] = 0;
        else if(dir == "EAST") moves[i] = 1;
        else if(dir == "SOUTH") moves[i] = 2;
        else if(dir == "WEST") moves[i] = 3;
    }
    
    dfs(k, start_x, start_y);
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(i == start_x && j == start_y && maps[i][j]) {
                cout << ".";
            }
            else if(visited[0][i][j]) {
                cout << "*";
            }
            else if(maps[i][j]) {
                cout << ".";
            }
            else {
                cout << "X";
            }
        }
        cout << "\n";
    }
    
    return 0;
}