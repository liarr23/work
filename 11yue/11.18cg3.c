#include<stdio.h>
void mergesort(int arr3[],int arr1[],int arr2[],int n1,int n2)
{
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n1)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr3[k++]=arr2[j++];
    }
}
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
    int arr3[n1+n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    mergesort(arr3,arr1,arr2,n1,n2);
    for(int i=0;i<n1+n2-1;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("%d",arr3[n1+n2-1]);
    return 0;
}