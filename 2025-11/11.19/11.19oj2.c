#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int num,time;
        scanf("%d %d",&num,&time);
        int arr[num];
        for(int j=0;j<num;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(int j=0;j<num-1;j++)
        {
            for(int k=0;k<num-1-j;k++)
            {
                if(arr[k]>arr[k+1])
                {
                    int temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;
                }
            }
        }
        int sum=0;
        int turn =0;
        int total=0;
        int cnt=0;
        while(sum+arr[turn]<=time&&turn <num)
        {
            sum+=arr[turn];
            turn++;
            total+=sum;
            cnt++;
        }
        printf("Case %d: %d %d %d\n",i+1,cnt,sum,total);
    }
    return 0;
}