#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m=1000010;
    list <long long> deques[m];
    while(n--)
    {
        string op;
        cin >> op;
        if(op=="pop_back")
        {
            int x;
            cin >> x;
            if(!deques[x-1].empty())
            {
                deques[x-1].pop_back();
            }
        }
        else if(op=="pop_front")
        {
            int x;
            cin >> x;
            if(!deques[x-1].empty())
            {
                deques[x-1].pop_front();
            }
        }
        else if(op=="push_back")
        {
            int a,b;
            cin >> a >> b;
            deques[a-1].push_back(b);
        }
        else if(op=="push_front")
        {
            int a,b;
            cin >> a >> b;
            deques[a-1].push_front(b);
        }
        else if(op=="size")
        {
            int x;
            cin >> x;
            cout << deques[x-1].size() << "\n";
        }
        else if(op=="front")
        {
            int x;
            cin >> x;
            if(!deques[x-1].empty())
            {
                cout << deques[x-1].front() << "\n";
            }
        }
         else if(op=="back")
        {
            int x;
            cin >> x;
            if(!deques[x-1].empty())
            {
                cout << deques[x-1].back() << "\n";
            }
        }
    }
    return 0;
}