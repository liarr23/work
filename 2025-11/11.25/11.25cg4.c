#include<stdio.h>
int fun(int n)
{
    int check=0;
if(n%4==0&&n%100!=0)
{
check=1;
}
if(n%400==0)
{
check=1;
}
return check;
}
int main()
{
    int year , f ;
    scanf("%d",&year);
    f=fun(year);
    if(f==1)
         printf("yes");
    else
        printf("no");
}
