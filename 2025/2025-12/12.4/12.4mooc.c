#include<stdio.h>
#define ADD(a,b) a=a+b;
int main()
{
    int a=3,b=4,t=0;
    t=ADD(a,b)*ADD(a,b);
    printf("%d",t);
}