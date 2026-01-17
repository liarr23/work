#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    int op;
    while(n--)
    {
       cin >> op;
       if(op==1)
       {
        int x;
        cin >> x;
        q.push(x);
       } 
       else if(op==2)
       {
        if(!q.empty())
        {
            q.pop();
        }
        else
        {
            cout << "ERR_CANNOT_POP\n";
        }
       }
       else if(op==3)
       {
           if(!q.empty())
           {
            cout << q.front() << "\n";
           }
           else
           {
            cout << "ERR_CANNOT_QUERY\n";
           }
       }
       else if(op==4)
       {
        cout << q.size() << "\n";
       }
    }
    return 0;
}