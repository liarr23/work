#include<stdio.h>
int sum(int t)
{
    if(t==1)
    {
        return 1;
    }
    else
    {
        return t + sum(t-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}