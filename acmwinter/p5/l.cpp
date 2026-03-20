#include<bits/stdc++.h>
using namespace std;
int n,m,op,a,b,res=0;
vector<int>fa(150010);
int find(int a)
{
    return fa[a]==a?a:fa[a]=find(fa[a]);
}
void unit(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b)
    {
        return ;
    }
    fa[b]=a;
}

int main()
{
    cin >> n >> m;
    for(int i=1;i<=3*n;i++)
    {
        fa[i]=i;
    }
    while(m--)
    {
        cin >> op >> a >> b;
        if(a>n||b>n)
        {
            res++;
            continue;
        }
        else if(op==2&&a==b)
        {
            res++;
            continue;
        }
        if(op==1)
        {
            if(find(a)==find(b+n)||find(a)==find(b+2*n))
            {
                res++;
                continue;
            }
            else
            {
                unit(a,b);
                unit(a+n,b+n);
                unit(a+2*n,b+2*n);
            }
        }
        else if(op==2)
        {
            if(find(a)==find(b)||find(a)==find(b+n))
            {
                res++;
                continue;
            }
            else
            {
                unit(a+n,b);
                unit(a+2*n,b+n);
                unit(a,b+2*n);
            }
        }
    }
    cout << res ;
    return 0;
}