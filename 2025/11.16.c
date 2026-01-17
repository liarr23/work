#include<stdio.h>
#include<stdlib.h>
void merge(long long int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    long long int *left=(long long int*)malloc(n1*sizeof(long long int));
    long long int *right=(long long int*)malloc(n2*sizeof(long long int));
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while (i < n1) arr[k++] = left[i++];
    while (j < n2) arr[k++] = right[j++];
    free(left);
    free(right);
}
void mergeSort(long long int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main()
{
    int n,mid;
    scanf("%d",&n);
    long long int stick[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&stick[i]);
    }
    mergeSort(stick,0,n-1);
    long long int cost=0;
    mid=stick[n/2];
    for(int i=0;i<n;i++)
    {
        cost+=abs(stick[i]-mid);
    }
    printf("%lld\n",cost);
    return 0;
}