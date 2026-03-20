#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<bitset<64>>a(n);
    vector<unsigned long long>as(n);
    for(int i=0;i<n;i++)
    {
        cin >> as[i];
        a[i]=as[i];
    }
    int pos=-1;
    for(int i=0;i<64;i++)
    {
        int check=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i])
            {
                check=1;
                break;
            }
        }
        if(check)
        {
            pos=i;
        }
    }
    bitset<64>k1(0);
    for(int i=pos;i>=0;i--)
    {
        int num1=0;
        int num0=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i])
            {
                num1++;
            }
            else
            {
                num0++;
            }
        }
        if(num1<num0)
        {
            k1.set(i);
        }
        else
        {
            k1.reset(i);
        }
    }
    while(k1.to_ullong()>k)
    {
        k1.reset(pos--);
    }
    unsigned long long x = k1.to_ullong();
    unsigned long long res=0;
    for(int i=0;i<n;i++)
    {
        res+=as[i]^x;
    }
    cout << res ;
    return 0;
}  