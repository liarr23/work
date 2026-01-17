#include <stdio.h>
#include <string.h>
int main()
{
    void sn(char *s);
    char str[1000];
    char *p=str;
    int k;
    gets(str);
    sn(p);
    return 0;
}
void sn(char *s)//定义函数
{
    int cnt = 1;
    int i=1;
    for(i=1;s[i]!='\0';i++)//遍历数组
    {
        if(s[i]==s[i-1])//相同则计数加一
        {
            cnt++;
        }
        else
        {
            printf("%c#%d",s[i-1],cnt);//不同则输出，计数重置
            cnt=1;
        }
    }
    printf("%c#%d",s[i-1],cnt);
}