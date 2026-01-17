#include "stdio.h"
#include "string.h"
int main()
{    int same_set(int *a, int *b, int len);
    int num, i, j;
    int a[100], b[100];
    scanf("%d",&num);
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    for(i=0;i<num;i++)
        scanf("%d",&b[i]);
    printf("%d\n",same_set(a,b,num));
    return 0;
}
int same_set(int *a, int *b, int len)//定义函数
{
    int check=1;
    int cnt=0;
    for(int i=0;i<len;i++)//判断有无重复
    {
        int cnt_1=0;
        int cnt_2=0;
        for(int j=0;j<len;j++)
        {
            if(a[i]==b[j])
            {
                cnt_1++;
            }
        }
        for(int j=0;j<len;j++)
        {
            if(a[j]==a[i])
            {
                cnt_2++;
            }
        }
        if(cnt_1!=0&&cnt_1==cnt_2)
        {
            cnt++;
        }
        if((cnt_1!=0||cnt_2!=0)&&(cnt_1!=cnt_2))
        {
            check=0;
            break;
        }
    }
    if(cnt==0)
    {
        check=0;
    }
    return check;//返回值
}