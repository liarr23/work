#include<stdio.h>
void fun(int val,int q[val][val],int n,int m,int num)
{
    if(num/2!=0)
    {
        for(int i=0;i<num/2;i++)
        {
            for(int j=0;j<num/2;j++)
            {
                q[i+n][j+m]=0;
            }
        }
        fun(val,q,n+num/2,m,num/2);
        fun(val,q,n,m+num/2,num/2);
        fun(val,q,n+num/2,m+num/2,num/2);
    }
    else
    {
        return;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int num=1;
    while(n--)
    {
        num*=2;
    }
    int queue[num][num];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            queue[i][j]=1;
        }
    }
    fun(num,queue,0,0,num);
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            printf("%d ",queue[i][j]);
        }
        printf("\n");
    }
    return 0;
}