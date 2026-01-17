#include <stdio.h>
long int fun(int a,int n)
{
    int sum=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
       temp=temp*10+a;
       sum+=temp;
    }
    return sum;
}
int main()
{
    int n,a;
    long int fun(a, n);
    scanf("%d%d",&a,&n);
    printf("%ld\n",fun(a-1,n-1)+fun(a+1,n+1)+fun(a,n));
    return 0;
}