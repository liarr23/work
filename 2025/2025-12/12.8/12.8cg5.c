#include <stdio.h>
#include <string.h>
int main()
{
     int  find(int *a, int n, int k);
    int a[10];
    int i,k,m;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    m=find(a,10,k);
    printf("%d",m);
    return 0;
}
int  find(int a[], int n, int k)//申明函数
{
    int add=0;//定义返回变量
    for(int i=0;i<n;i++)//遍历数组
    {
        if(a[i]>k)
        {
            add++;
        }
    }
    return add;//返回值
}