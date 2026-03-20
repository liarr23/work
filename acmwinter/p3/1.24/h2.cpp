#include<bits/stdc++.h>
using namespace std;

struct point {
    int x;
    int y;
    int direct;
};

int main() {
    string ops;
    cin >> ops;
    point end;
    cin >> end.x >> end.y;
    
    int cnt = 0; 
    int len = ops.size();
    vector<int> op(len + 1, 0);
    
    for (int i = 0; i < len; i++) {
        if (ops[i] == 'T') {
            cnt++;
            op[i + 1] = 1;
        }
    }
    
    int num = 0;
    vector<vector<point>> move(len + 1, vector<point>(1 << cnt));
    
    move[0][0].x = 0;
    move[0][0].y = 0;
    move[0][0].direct = 1;

    for (int i = 1; i <= len; i++) {
        if (op[i]) {
            num++;
            int bit = (1 << (num - 1)); 
            for (int j = 0; j < bit; j++) 
            {
                move[i][j].x = move[i-1][j].x;
                move[i][j].y = move[i-1][j].y;
                move[i][j].direct = (move[i-1][j].direct + 3) % 4;
            }
            for (int j = bit; j < (1 << num); j++) {
                int prev_idx = j - bit; 
                move[i][j].x = move[i-1][prev_idx].x;
                move[i][j].y = move[i-1][prev_idx].y;
                move[i][j].direct = (move[i-1][prev_idx].direct + 1) % 4; 
            }
            
        } else {
            for (int j = 0; j < (1 << num); j++) 
            {
                move[i][j] = move[i-1][j];    
                if (move[i][j].direct == 1) move[i][j].x++;
                else if (move[i][j].direct == 2) move[i][j].y--;
                else if (move[i][j].direct == 3) move[i][j].x--;
                else if (move[i][j].direct == 0) move[i][j].y++;
            }
        }
    }

    int check = 0;
    for (int i = 0; i < (1 << num); i++) { 
        if (move[len][i].x == end.x && move[len][i].y == end.y) {
            check = 1;
            break;
        }
    }
    
    if (check) cout << "Yes";
    else cout << "No";
    
    return 0;
}
