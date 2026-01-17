#include<stdio.h>
int main()
{
    int n,m;
    int sum=0;
    int cnt=0;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        sum=0;
        cnt=0;
    for(int i=n;i<=m;i++)
    {
        sum+=i;
        if(cnt<5)
        {
            cnt++;
            printf("%5d",i);
        }
        else
        {
            printf("\n");
            cnt=1;
            printf("%5d",i);
        }
    }
    printf("\nSum = %d\n",sum);
    }
    return 0;
}