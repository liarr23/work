#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int>tree;
int lowbit(int x)
{
    int res=x&-x;
    return res;
}
void add(int x ,int k)
{
    while(x<=n)
    {
       tree[x]+=k;
       x+=lowbit(x);
    }
}
long long sum(int x)
{
    long long res=0;
    while(x>0)
    {
        res+=tree[x];
        x-=lowbit(x);
    }
    return res;
}
int main()
{
    int num_op;
    cin >> n >> num_op;
    tree.resize(n+1);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        add(i,x);
    }
    while(num_op--)
    {
        int op;
        cin >> op;
        if(op==1)
        {
            int x,y,k;
            cin >> x >> y >> k;
            for(int i=x;i<=y;i++)
            {
            add(i,k);
            }
        }
        else 
        {
            int pos;
            cin >> pos;
            long long res=sum(pos)-sum(pos-1);
            cout << res << "\n";
        }
    }
    return 0;
}