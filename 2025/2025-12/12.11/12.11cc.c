#include<stdio.h>
int gcd(int n,int m)
{
    int max=n,min=m;
    if(m>max)
    {
        max=m;
        min=n;
    }
    while(max%min)
    {
        if(max%min>min)
        {
            max=max%min;
        }
        else
        {
            int temp=max;
            max=min;
            min=temp%min;
        }
    }
    return min;
}
int lcm(int n,int m,int gcd)
{
    int Lcm;
    Lcm=n*m/gcd;
    return Lcm;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int Gcd=gcd(num[i],num[i+1]);
        num[i+1]=lcm(num[i],num[i+1],Gcd);
    }
    printf("%lld",num[n-1]);
    return 0;
}