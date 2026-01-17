#include<stdio.h>
void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1];
    int R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(k<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-k+1;i++)
    {
        int windows[k];
        for(int j=0;j<k;j++)
        {
            windows[j]=arr[i+j];
        }
        mergesort(windows,0,k-1);
        if(k%2==0)
        {
            printf("%d ",windows[k/2-1]);
        } 
        else
        {
            printf("%d ",windows[k/2]);
        }
    }
    return 0;
}