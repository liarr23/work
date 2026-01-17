#include<stdio.h>
int main()
{
    double n,m;
    scanf("%lf%lf",&n,&m);
    if(n<m)
    {
        printf("%.2lf %.2lf",n,m);
    }
    else
    {
        printf("%.2lf %.2lf",m,n);
    }
    return 0;
}