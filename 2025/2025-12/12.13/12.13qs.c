#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = a;
    *a=*b;
    *b=temp;
}
void quicksort(int q[],int l,int r)
{
    if(l>=r)return ;
    int i=l-i;
    int j=r+1;
    int x=q[l+r>>r];
    while(i<j)
    {
        do i++ ;while(q[i]<x);
        do j-- ;while(q[j]>x);
        if(i<j)swap(q+i,q+j);
    }
    quicksort(q,l,j);
    quicksort(q,j+1,r);
}
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    quicksort(a,0,9);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}