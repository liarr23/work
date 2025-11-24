#include<stdio.h>
int main()
{
    int arr[20];
    for(int i=0;i<20;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int i =0;
    while(i<20)
    {
        if(i+3<20)
        {
        if(arr[i]!=0&&arr[i+1]!=0&&arr[i+2]==0)
        {
            sum+=arr[i]+arr[i+1];
            i=i+3;
        }
        else
        {
            break;
        }
        }
        else
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}