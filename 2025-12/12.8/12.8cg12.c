#include <stdio.h>
#include <string.h>
int main()
{
     void trim(char *str);
    char s[1000];
    gets(s);
    trim(s);
    puts(s);
    return 0;
}
void trim(char *str)//定义函数
{
    int pos_1;//定义变量
    int pos_2;
    int len =strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            pos_1=i;//获得第一个位置
            break;
        }
    }
    for(int i=len-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            pos_2=i;//获得尾部
            break;
        }
    }
    int j=0;
    for(int i=pos_1;i<=pos_2;i++)//得出结果
    {
        str[j++]=str[i];
    }
    str[j]='\0';
}