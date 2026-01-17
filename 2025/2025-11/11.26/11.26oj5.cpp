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
        else
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
    }
    return 0;
}