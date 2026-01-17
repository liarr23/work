#include<stdio.h>
#include<limits.h>
void Merge(int *A,int left,int mid,int right,int *cnt)
{
    int n1=mid-left;
    int n2=right-mid;
    int L[n1+1];
    int R[n2+1];
    for(int i=0;i<n1;i++)
    {
        L[i]=A[left+i];
    }
    for(int i=0;i<n2;i++)
    {
        R[i]=A[mid+i];
    }
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;
    int l=0;
    int r=0;
for(int k=left;k<right;k++)
{
    (*cnt)++;
    if(L[l]<=R[r])
    {
        A[k]=L[l];
        l=l+1;
    }
    else
    {
        A[k]=R[r];
        r=r+1;
    }
}
}
void Merge_sort(int *A,int left,int right,int *cnt)
{
    if (left+1 < right)
    {
         int mid = (left + right)/2;
         Merge_sort(A, left, mid,cnt);
         Merge_sort(A, mid, right,cnt);
         Merge(A, left, mid, right,cnt);
    }
}
int main()
{
    int n;
    int cnt=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    Merge_sort(A,0,n,&cnt);
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n%d",cnt);
    return 0;
}