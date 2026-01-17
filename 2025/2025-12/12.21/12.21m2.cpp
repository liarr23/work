#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int num=0;
    cin >> n;
    vector <int> isprime(n+1,1);
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            isprime[i]=0;
            continue;
        }
        else if(i==2)
        {
            isprime[i]=1;
            continue;
        }
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                isprime[i]=0;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int k=max(i,j);
            for(int l=k;l<=n;l++)
            {
                if(i*j%l==1&&isprime[l]==1)
                {
                    num++;
                }
            }
        }
    }
    cout << num << endl;
    return 0;
}