#include<stdio.h>
int main()
{
    int level,mount;
    scanf("%d%d",&level,&mount);
    if(level==0)
    {
        printf("%.2f",mount*1.0);
    }
    if(level==1)
    {
        printf("%.2f",mount*0.95);
    }
    if(level==2)
    {
        printf("%.2f",mount*0.9);
    }
    if(level==3)
    {
        printf("%.2f",mount*0.85);
    }
    return 0;
}