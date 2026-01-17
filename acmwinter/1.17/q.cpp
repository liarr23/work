#include<bits/stdc++.h>
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
int main()
{
    int len,ops;
    len = read();
    ops = read();
    int nums[100000][20];
    int lg[100000];
    lg[1]=0;
    for(int i=2;i<=len;i++)
    {
        lg[i]=lg[i>>1]+1;
    }
    for(int i=1;i<=len;i++)
    {
        nums[i][0]=read();
    }
    for(int i=1;(1 << i)<=len;i++)
    {
        for(int j=1;j<=len-(1<<i) + 1;j++)
        {
            nums[j][i]=max(nums[j][i-1],nums[j+(1<<(i-1))][i-1]);
        }
    }
    while(ops--)
    {
        int l,r;
        l=read();
        r=read();
        int m=lg[r-l+1];
        cout << max(nums[l][m],nums[r-(1<<m)+1][m]) << "\n";
    }
    return 0;
}