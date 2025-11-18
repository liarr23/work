#include<stdio.h>
int main()
{
    int n1;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int n2;
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1-1;i++)
    {
        for(int j=0;j<n1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n1;i++)
    {
        int check=1;
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                check=0;
                break;
            }
        }
        if(check==1)
        {
            printf("%d ",arr1[i]);
        }
    }
    return 0;
}