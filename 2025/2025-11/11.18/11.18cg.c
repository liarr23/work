/*#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    double ave=0;
    for(int i=0;i<10;i++)
    {
        ave+=arr[i];
    }
    ave=ave/10.0;
    printf("%.2f\n",ave);
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[11];
    for(int i=0;i<11;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<11-1;i++)
    {
        for(int j=0;j<11-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=10;i>5;i--)
    {
        printf("%4d ",arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    double ave=sum/10.0;
    int add[10]={0};
    int min,num;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>=ave)
        {
            add[i]=arr[i];
        }
    }
    for(int i=0;i<10;i++)
    {
        if(add[i]!=0)
        {
            min=add[i];
            break;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(add[i]<min&&add[i]!=0)
        {
            num=i;
            min=add[i];
        }
    }
    printf("%6d%6d",arr[num],num+1);
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10-1;i++)
    {
        for(int j=0;j<10-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=9;i>6;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt[20000]={0};
    for(int i=0;i<10;i++)
    {
        if(arr[i]>=0)
        {
        cnt[arr[i]]++;
        }
        else
        {
            cnt[20000+arr[i]]++;
        }
    }
    int cnt1=0;
    for(int i=10001;i<20000;i++)
    {
        if(cnt[i]==2)
        {
            printf("%6d ",i-20000);
            cnt1++;
        }
    }
    for(int i=0;i<=10000;i++)
    {
        if(cnt[i]==2)
        {
            printf("%6d ",i);
            cnt1++;
        }
    }
    if(cnt1==0)
    {
        printf("None");
    }
    return 0;
}