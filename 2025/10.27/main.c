#include<stdio.h
int findmin(int arr[])
{
    int min=arr[0];
    for(int i=0;i<8;i++)
    {
       if(arr[i]<min)
       min=arr[i];
    }
    return min;
}
int findmax(int arr[])
{
    int max=arr[0];
    for(int i=0;i<8;i++)
    {
       if(arr[i]>max)
       max=arr[i];
    }
    return max;
}
int main()
{
    int A[]={10,2,-3,4,5,6,7,8,9,0};
    printf("%d\n%d\n",findmax(A),findmin(A));
    return 0;
}