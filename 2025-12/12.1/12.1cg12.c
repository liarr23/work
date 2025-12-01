#include <stdio.h>
#include <stdlib.h>
int f(int n);
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",f(n));
   return 0;
}
int f(int n)//声明函数
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return f(n-1)+f(n-2);//自我调用
    }
}