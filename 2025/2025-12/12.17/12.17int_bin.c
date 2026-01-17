#include<stdio.h>
void decimal_to_binary(int n)//定义十进制转二进制函数
{
    if(n==0)
    {
        printf("0");
        return;
    }
    int binary[32];
    int index=0;
    while(n>0)
    {
        binary[index]=n%2;
        n=n/2;
        index++;
    }
    for(int i=index-1;i>=0;i--)
    {
        printf("%d",binary[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    decimal_to_binary(n);
    return 0;
}