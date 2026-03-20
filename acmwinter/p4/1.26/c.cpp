#include<iostream>
#include<cmath>
using namespace std;
int n,num=1;
int used[21];
int out[21];
bool isprime(int x)
{
    if(x<2)
    {
        return false;
    }
    else if(x==2)
    {
        return true;
    }
    else
    {
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
void print()
{
    for(int i=0;i<n;i++)
    {
        cout << out[i] << " ";
    }
    cout << "\n";
}
void dfs(int x)
{
    if(x==n&&isprime(out[0]+out[n-1]))
    {
         print();
         return;
    }
    for(int i=2;i<=n;i++)
        {
            if(!used[i]&&isprime(out[x-1]+i))
            {
                used[i]=1;
                out[x]=i;
                dfs(x+1);
                used[i]=0;
            }
        }
}
int main()
{
    used[1]=1;
    out[0]=1;
    while(cin >> n)
    {
        cout << "Case " << num++ << ":\n";
        dfs(1);
        cout << "\n";
    }
    return 0;
}
