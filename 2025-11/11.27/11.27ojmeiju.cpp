#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    unsigned long long full=(1ull << n) -1;
    unsigned long long begin =0;
    for(int i=0;i<k;i++)
    {
        begin |= (1ull << i);
    }
    for(unsigned long long int i=begin ;i<=full;i++)
    {
        int cnt =0;
        for(int j=0;j<=n;j++)
        {
            if((i&(1ull << j))==(1ull << j))
            {
                cnt ++;
            }
        }
        if(cnt == k)
        {
            cout << i << ":";
            for(int j=0;j<=n;j++)
            {
                if((i&(1ull << j))==(1ull << j))
                {
                    cout << " " << j;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}