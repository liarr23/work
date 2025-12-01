#include<stdio.h>
void fun(char s[], char c);
int main()
{ 
    char str[50],c;
    gets(str);
    scanf("%c", &c);
    fun(str, c);
    return 0;
}
void fun(char s[],char c)//申明函数
{
    int cnt=0;//判定是否出现
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==c)
        {
            cnt++;
        }
    }
    if(cnt)//输出结果
    {
         for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=c)
        {
            printf("%c",s[i]);
        }
    }
    }
    else
    {
        printf("%c not exist in\n%s",c,s);
    }
}  