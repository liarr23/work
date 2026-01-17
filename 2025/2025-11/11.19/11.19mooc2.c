#include<stdio.h>
void mysortpoints(double points[][3],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(points[j][2]>points[j+1][2])
            {
                double temp0=points[j][0];
                double temp1=points[j][1];
                double temp2=points[j][2];
                points[j][0]=points[j+1][0];
                points[j][1]=points[j+1][1];
                points[j][2]=points[j+1][2];
                points[j+1][0]=temp0;
                points[j+1][1]=temp1;
                points[j+1][2]=temp2;
            }
        }
    }
}
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
    mysortpoints(points,5);
    for(int i=0;i<5;i++)
    {
        printf("{%lf,%lf}\n",points[i][0],points[i][1]);
    }
    return 0;
}