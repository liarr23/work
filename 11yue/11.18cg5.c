#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr2[j]<arr2[j+1])
            {
                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    int diff=1;
    for(int i=1;i<n;i++)
    {
        if(arr2[i]!=arr2[i-1])
        {
            diff++;
        }
    }
    int arr3[diff];
    arr3[0]=arr2[0];
    int num=1;
    for(int i=1;i<n;i++)
    {
        if(arr2[i]!=arr2[i-1])
        {
            arr3[num++]=arr2[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<diff;j++)
        {
            if(arr[i]==arr3[j])
            {
                printf("%d ",j+1);
            }
        }
    }
    return 0;
}