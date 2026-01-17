#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int steps[n][n];
        int num=1;
        int x=0,y=0;
        int corner_x1=0,corner_y1=0;
        int corner_x2=n-1,corner_y2=n-1;
        while(num<=n*n)
        {
            if(x==corner_x1&&y==corner_y1)
            {
                for(int i=corner_y1;i<=corner_y2;i++)
                    steps[corner_x1][i]=num++;
                corner_x1++;
                x=corner_x1;
                y=corner_y2;
            }
            else if(x==corner_x1&&y==corner_y2)
            {
                for(int i=corner_x1;i<=corner_x2;i++)
                    steps[i][corner_y2]=num++;
                corner_y2--;
                x=corner_x2;
                y=corner_y2;
            }
            else if(x==corner_x2&&y==corner_y2)
            {
                for(int i=corner_y2;i>=corner_y1;i--)
                    steps[corner_x2][i]=num++;
                corner_x2--;
                x=corner_x2;
                y=corner_y1;
            }
            else if(x==corner_x2&&y==corner_y1)
            {
                for(int i=corner_x2;i>=corner_x1;i--)
                    steps[i][corner_y1]=num++;
                corner_y1++;
                x=corner_x1;
                y=corner_y1;
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