#include<bits/stdc++.h>
using namespace std;
struct line{
    int l;
    int r;
}a[1000010];
bool cmp(line a, line b)
{
	return a.r < b.r;
}
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i].l >> a[i].r;
    }
    int res=1;
    sort(a+1,a+1+n,cmp);
    int end=a[1].r;
    for(int i=2;i<=n;i++)
    {
        if(a[i].l>=end)
        {
            end=a[i].r;
            res++;
        }
    }
    cout << res;
    return 0;
}