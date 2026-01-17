#include<stdio.h>
struct goods{
    int gid;
    char gname[20];
    int remains;
    int avg;
};
int main()
{
    struct goods g[20];
    int n;
    int i;
/*可以在此处定义其他要使用的变量*/
int leak[20];
int num=0;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&g[i].gid);
        scanf("%s",g[i].gname);
        scanf("%d",&g[i].remains);
        scanf("%d",&g[i].avg);
    }
/*请在下面填写代码*/
for(int j=0;j<n;j++)
{
if(g[j].remains<g[j].avg*7)
{
   leak[num++]=j;
}
}
for(int j=0;j<num;j++)
{
for(int k=j;k<num;k++)
{
if(g[leak[j]].remains>g[leak[k]].remains)
{
int temp=leak[j];
leak[j]=leak[k];
leak[k]=temp;
}
}
}
for(int j=0;j<num;j++)
{
printf("%d %s %d\n",g[leak[j]].gid,g[leak[j]].gname,g[leak[j]].remains);
}
return 0;
}
