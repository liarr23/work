#include<bits/stdc++.h>
using namespace std;
int n,m,num,a,b;
vector<int>fa(500010);
vector<int>res(500010,0);
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
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    while(m--)
    {
        cin >> num;
        if(num>=1)
        {
            cin >> a;
            for(int i=1;i<num;i++)
            {
               cin >> b;
               unit(a,b); 
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
         res[find(i)]++;
    }
    for(int i=1;i<=n;i++)
    {
        cout << res[find(i)] << " ";
    }
    return 0;
}