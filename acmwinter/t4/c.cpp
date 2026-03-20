#include<bits/stdc++.h>
using namespace std;
unsigned long long res;
vector<int>r(5,0);
vector<int>c(5,0);
vector<int>x(2,0);
vector<vector<int>>chess(5,vector<int>(5,0));
void dfs(int p,int rc)
{
    for(int i=0;i<5;i++)
    {
        if(r[i]==5||r[i]==-5||c[i]==5||c[i]==-5)
        {
            return;
        }
    }
    if(x[0]==5||x[1]==5||x[0]==-5||x[1]==-5)
        {
            return;
        }
    if(rc==25)
    {
        res++;
        return;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(!chess[i][j])
            {
                if(p==1)
                {
                    chess[i][j]=1;
                    r[i]++;
                    c[j]++;
                if(i==j)
                {
                    x[0]++;
                }
                if(i+j==4)
                {
                    x[1]++;
                }
                dfs(-1*p,rc+1);
                chess[i][j]=0;
                r[i]--;
                c[j]--;
                if(i==j)
                {
                    x[0]--;
                }
                if(i+j==4)
                {
                    x[1]--;
                }
                }
                if(p==-1)
                {
                    chess[i][j]=1;
                    r[i]--;
                    c[j]--;
                if(i==j)
                {
                    x[0]--;
                }
                if(i+j==4)
                {
                    x[1]--;
                }
                dfs(-1*p,rc+1);
                chess[i][j]=0;
                r[i]++;
                c[j]++;
                if(i==j)
                {
                    x[0]++;
                }
                if(i+j==4)
                {
                    x[1]++;
                }
                }
                
            }
        }
    }
}
int main()
{
    dfs(1,0);
    cout << res;
    return 0;
}