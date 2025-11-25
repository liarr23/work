#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector <list<long long int>> lists(n);
    while(q--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            int t,x;
            cin >> t >> x;
            lists[t].push_back(x);
        }
        else if(op==1)
        {
           int t;
           cin >> t;
           if(!lists[t].empty())
           {
            auto it = lists[t].begin();
            if (it != lists[t].end()) 
            {
             cout << *it;
            for (++it; it != lists[t].end(); ++it) 
                {
                cout << " " << *it;
                }
            }  
           cout << "\n";
           }
           else
           {
            cout << "\n";
           }
        }
        else
        {
           int s,t;
           cin >> s >> t;
           if(s!=t)
           {
               lists[t].splice(lists[t].end(),lists[s]);
           }
        }
    }
}