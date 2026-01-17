#include <stdio.h>
void fun(int a[],int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    fun(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void fun(int a[],int n)//申明函数
{
    int rev[n];
    for(int i=0;i<n;i++)//将倒序数组暂存
    {
        rev[i]=a[n-i-1];
    }
    for(int i=0;i<n;i++)//暂存数组返回原数组
    {
        a[i]=rev[i];
    }
}