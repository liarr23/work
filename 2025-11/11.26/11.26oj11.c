#include<stdio.h>
int main()
{
    int m;
    while(scanf("%d",&m)==1)
    {
    int n=m;
    int res=1;
    while(n--)
    {
        res*=2;
    }
    printf("2^%d = %d\n",m,res);
}
    return 0;
}