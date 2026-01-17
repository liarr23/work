#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, h_x, h_y;
    cin >> x >> y >> h_x >> h_y;
    
    long long field[x+1][y+1];
    
    // 初始化棋盘
    for(int i=0; i<=x; i++) {
        for(int j=0; j<=y; j++) {
            field[i][j] = 1;
        }
    }
    
    field[h_x][h_y] = 0;
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
    
    for(int i=0; i<8; i++) {
        int nx = h_x + dx[i];
        int ny = h_y + dy[i];
        if(nx >= 0 && nx <= x && ny >= 0 && ny <= y) {
            field[nx][ny] = 0;
        }
    }
    
    if(field[0][0] == 0) {
        cout << 0 << endl;
        return 0;
    }
    for(int i=1; i<=x; i++) {
        if(field[i][0] == 0) {
            for(int j=i; j<=x; j++) {
                field[j][0] = 0;
            }
            break;
        }
    }
    
    for(int i=1; i<=y; i++) {
        if(field[0][i] == 0) {
            for(int j=i; j<=y; j++) {
                field[0][j] = 0;
            }
            break;
        }
    }
    for(int i=1; i<=x; i++) {
        for(int j=1; j<=y; j++) {
            if(field[i][j] != 0) {
                field[i][j] = field[i-1][j] + field[i][j-1];
            }
        }
    }
    
    cout << field[x][y] << endl;
    return 0;
}