#include<stdio.h>
int find_left(int tower[],int len,int value)
{
    int left=0;
    int right=len;
    while(left<right)
    {
        int mid=(left+right)/2;
        if(tower[mid]>value)
        {
            right=mid;
        }
        else
        {
            left=mid+1;
        }
    }
    return left;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int tower[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int t=0;
    for(int i=0;i<n;i++)
    {
    int locate=find_left(tower,t,arr[i]);
    if(locate==t)
    {
        tower[t++]=arr[i];
    }
    else{
        tower[locate]=arr[i];
    }
    }
    printf("%d",t);
    return 0;
}