#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    m++;
    vector<int> turns;
    bool circle[n];  
    for (int i = 0; i < n; i++) 
    {
        circle[i] = true;
    }

    int cnt = n;
    int num = 0;      
    int turn = 0;

    while (cnt > 1) 
    {
        if (circle[turn]) 
        {
            num++;
            if (num == m) {
                circle[turn] = false;
                turns.push_back(turn + 1);
                cnt--;
                num = 0;
            }
        }
        turn = (turn + 1) % n;
    }
    for (int i = 0; i < n; i++) 
    {
        if (circle[i]) 
        {
            turns.push_back(i + 1);
            break;
        }
    }
    for (int x : turns) 
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}