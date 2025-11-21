#include<stdio.h>
int main()
{
    double points[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2;j++)
        {
        scanf("%lf",&points[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        points[i][2]=points[i][0]*points[i][0]+points[i][1]*points[i][1];
    }
    int max_index=0;
    for(int i=1;i<5;i++)
    {
        if(points[i][2]>points[max_index][2])
        {
            max_index=i;
        }
    }
    printf("{%lf,%lf}\n",points[max_index][0],points[max_index][1]);
}