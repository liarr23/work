#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>tree(n+1);
vector<int>a(n+1);
int lowbit(int x)
{
    return x & -x;
}
void update(int x,int k)
{
    while(x<=n)
    {
        tree[x]+=k;
        x+=lowbit(x);
    }
}
int sum(int x)
{
    int res=0;
    while(x>0)
    {
        res+=tree[x];
        x-=lowbit(x);
    }
    return res;
}
int main()
{
    int m;
    cin >> n >> m;
    tree.resize(n+1);
    a.resize(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        update(i,a[i]-a[i-1]);
    }
    while(m--)
    {
        int op;
        cin >> op;
        if(op==1)
        {
            int l,r,k;
            cin >> l >> r >> k;
            update(l,k);
            update(r+1,-k);
        }
        else
        {
            int x;
            cin >> x;
            int res=sum(x);
            cout << res << "\n";
        }
    }
    return 0;
}