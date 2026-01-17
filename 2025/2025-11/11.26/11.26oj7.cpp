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
        int op;
        cin >> op;
        if(op==0)
        {
            int x;
            cin >>x;
            sets.insert(x);
            cout << sets.size() << "\n";
        }
        else if(op==1)
        {
            int x;
            cin >>x;
            if(sets.find(x)!=sets.end())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if(op==2)
        {
            int x;
            cin >> x;
            sets.erase(x);
        }
        else
        {
           int l,r;
           cin >> l >> r;
           auto low = sets.lower_bound(l);
           auto up =sets.upper_bound(r);
           for(auto it=low;it!=up;++it)
           {
            cout << *it << "\n";
           }
        }
    }
    return 0;
}