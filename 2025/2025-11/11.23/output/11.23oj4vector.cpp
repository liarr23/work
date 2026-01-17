#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    std :: vector<std :: vector<int>> myvector2(n,vector<int>());
    while(q--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            int t,x;
            cin  >> t >> x;
            myvector2[t].push_back(x);
        }
        else if(op==1)
        {
            int t;
            cin >> t;
            if(myvector2.empty())
            {
                cout << ' ' << '\n';
            }
            else
            {
            for(auto i : myvector2[t])
            {
                cout << i << ' ';
            }
            cout << '\n';
            }
        }
        else
        {
            int t;
            cin >> t;
            myvector2[t].clear();
        }
    }
    return 0;
}