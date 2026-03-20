#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long l,r;
    cin >> l >> r;
    unsigned long long diff=l^r;
    bitset<64>diffe(diff);
    int min=0;
    for(int i=63;i>=0;i--)
    {
        if(diffe[i]==1)
        {
            min=i;
            break;
        }
    }
    unsigned long long res=(1llu<<(min +1))-1;
    if(l!=r)
    {
    cout << res;
    }
    else
    {
        cout << 0;
    }
    return 0;
}