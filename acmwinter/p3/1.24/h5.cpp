#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string ops;
    cin >> ops;
    int end_x, end_y;
    cin >> end_x >> end_y;
    int len = ops.size();
    
    vector<tuple<int, int, int>> curr;
    curr.push_back({0, 0, 0});

    for (int i = 0; i < len; i++) 
    {
        vector<tuple<int, int, int>> next; 
        
        if (ops[i] == 'T') {
            for (auto it : curr) {
                int x, y, z;
                tie(x, y, z) = it;
                next.push_back({x, y, (z + 3) % 4});
                next.push_back({x, y, (z + 1) % 4});
            }
        } else {
            for (auto it : curr) {
                int x, y, z;
                tie(x, y, z) = it;
                if (z == 0) {
                    next.push_back({x + 1, y, z});
                } else if (z == 1) {
                    next.push_back({x, y - 1, z});
                } else if (z == 2) {
                    next.push_back({x - 1, y, z});
                } else {
                    next.push_back({x, y + 1, z});
                }
            }
        }
        sort(next.begin(), next.end());
        next.erase(unique(next.begin(), next.end()), next.end());
        curr = next;
    }
    int check = 0;
    for (auto it : curr) {
        int x, y, z;
        tie(x, y, z) = it;
        if (x == end_x && y == end_y) {
            check = 1;
            break;
        }
    }
    if (check) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
