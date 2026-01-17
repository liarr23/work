#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector <stack<int>> STACK(n);
    while(q--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            int t,x;
            cin >> t >> x;
            STACK[t].push(x);
        }
        else if(op==1)
        {
            int t;
            cin >> t;
               if(!STACK[t].empty())
            {
            cout<<STACK[t].top() <<"\n";
            }
        }
        else
        {
            int t;
            cin >> t;
            if(!STACK[t].empty())
            {
            STACK[t].pop();
            }
        }
    }
    return 0;
} 