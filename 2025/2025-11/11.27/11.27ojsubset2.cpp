#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long long bit =0;
    int k;
    cin >> k;
    while(k--)
    {
        int  b;
        cin >> b;
        bit |= (1 << b);
    }
    for(unsigned long long int i=0;i<=bit;i++)
    {
        if((i & ~bit)==0)
        {
            cout << i << ":";
            for(int j=0;j<=n;j++)
            {
                if((i &(1ull << j))==(1ull << j))
                {
                    cout <<" "<< j ; 
                }
            } 
            cout << "\n";
        }
    }
    return 0;
}