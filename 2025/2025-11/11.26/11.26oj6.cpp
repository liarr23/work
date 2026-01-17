#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set <int> sets;
    while(n--)
    {
        int op,x;
        cin >> op >> x;
        if(op==0)
        {
            sets.insert(x);
            cout << sets.size() << "\n";
        }
        else if(op==1)
        {
            if(sets.find(x)!=sets.end())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else 
        {
            sets.erase(x);
        }
    }
    return 0;
}