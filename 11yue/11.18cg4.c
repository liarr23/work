#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    int maxcnt=1;
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        for(int j=1;j<n-i;j++)
        {
          if(arr[i]==arr[i+j])
          {
                cnt++;
                if(cnt>maxcnt)
                {
                    maxcnt=cnt;
                }
            }
            else
            {
                break;
          }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+maxcnt-1])
        {
            printf("%d %d\n",arr[i],maxcnt);
        }
    }
    return 0;
}