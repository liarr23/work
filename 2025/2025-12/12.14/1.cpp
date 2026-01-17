#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int max=n-2;
    int temp=1;
    int max_step=1;
    while(temp*k<=max)
    {
        max_step++;
        temp*=k;
    }
    int total=0;
    for(int i=0;i<=max_step;i++)
    {
        int plus=1;
        for(int a=0;a<i;a++)
                {
                    plus*=k;
                }
        for(int j=0;j<=max_step;j++)
        {
            int plus2=1;
            for(int a=0;a<j;a++)
                {
                    plus2*=k;
                }
            for(int f=0;f<=max_step;f++)
            {
                int plus3=1;
                for(int a=0;a<f;a++)
                {
                    plus3*=k;
                }
                if(plus3+plus2+plus<=n)
                {
                    total++;
                }
            }
        }
    }
    cout << total;
    return 0;
}