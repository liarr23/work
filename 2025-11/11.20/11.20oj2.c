#include<stdio.h>
int main()
{
    int n;;
    while(scanf("%d",&n)==1)
    {
    int steps[n][n];
    int num=1;
        for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                steps[i][j]=num++;
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                steps[i][j]=num++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",steps[i][j]);
        }
        printf("\n");
    }
}
    return 0;
}