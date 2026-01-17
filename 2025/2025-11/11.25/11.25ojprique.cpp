#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector <priority_queue<int>> pq(n);
    while(q--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            int t,x;
            cin >> t >> x;
            pq[t].push(x);
        }
        else if(op==1)
        {
            int t;
            cin >> t;
            if(!pq[t].empty())
            {
            cout << pq[t].top() << "\n";
            }
        }
        else
        {
            int t;
            cin >> t;
            if(!pq[t].empty())
            {
            pq[t].pop();
            }
        }
    }
    return 0;
}
