#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prm(int n);
int main()
{
   int i,m;
   scanf("%d",&m);
   for(i=0;i<=m;i++)
   {
    if(prm(i)==1) printf("%d ",i);}
   return 0;
 }
int prm(int n)
{
    int check=1;//声明返回值
    if(n>=4)//判定是否素数
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                check=0;
                break;
            }
        }
    }
    else
    {
        if(n==1||n==0)
        {
            check=0;
        }
    }
    return check;//返回值
}