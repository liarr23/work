#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    set <int> myset1;
    while(n--)
    {
        int x;
        cin >> x;
        myset1.insert(x);
    }
    cin >> m;
    set <int> myset2;
    while(m--)
    {
        int x;
        cin >> x;
        myset2.insert(x);
    }
    vector <int> setsymmetricdifference;
    set_symmetric_difference(myset1.begin(),myset1.end(),myset2.begin(),myset2.end(),back_inserter(setsymmetricdifference));
    for(auto it=setsymmetricdifference.begin();it!=setsymmetricdifference.end();++it)
    {
        cout << *it << "\n";
    }
    return 0;
}