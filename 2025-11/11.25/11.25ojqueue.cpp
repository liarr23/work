#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector <queue<int>> queues(n);
    while(q--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            int t,x;
            cin >> t >> x;
            queues[t].push(x);
        }
        else if(op==1)
        {
            int t;
            cin >> t;
            if(!queues[t].empty())
            {
            cout << queues[t].front() << "\n";
            }
        }
        else
        {
            int t;
            cin >> t;
            if(!queues[t].empty())
            {
            queues[t].pop();
            }
        }
    }
    return 0;
}