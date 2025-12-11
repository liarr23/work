#include <stdio.h>
#include <string.h>
int main()
{
     void  Dsort(int a[], int n);
    int a[10];
    int i;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    Dsort(a,10);
    for(i=0;i<10;i++)
        printf("%5d",a[i]);
    return 0;
}
 void  Dsort(int a[], int n)//定义函数
 {
    for(int i=0;i<n-1;i++)//遍历改数组
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((a[j]%2==0&&a[j+1]%2==0)||(a[j]%2==1&&a[j+1]%2==1))
            {
                if(a[j]>a[j+1])
                {
                   int temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                }
            }
            else if(a[j]%2==0&&a[j+1]%2==1)
            {
                int temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
            }
        }
    } 
 }