#include<stdio.h>
int main()
{
    int t;
    int a,b,n;
    int money=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
       money=0;
       scanf("%d%d%d",&a,&b,&n);
       if(a*10<b)
       {
        printf("%d\n",a*n);
       }
       else
       {
       if(n<10)
       {
        if(a*n>b)
        {
            printf("%d\n",b);
        }
        else
        {
            printf("%d\n",a*n);
        }
       }
       else
       {
        money+=(n/10*b);
        n=n%10;
        if(a*n>b)
        {
            printf("%d\n",money+b);
        }
        else
        {
            printf("%d\n",money+a*n);
        }
       }
    }
    }
    return 0;
}