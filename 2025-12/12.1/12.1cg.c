#include<stdio.h>
int pws(char s[]);
int main()
{ 
    char str[50];
    int n;
    gets(str);
    n = pws(str);
    if (n==1)
        printf ("pass");
    else
        printf ("fail");
    return 0;
}
int pws(char s[])//声明函数体
{
    int cnt=0;//初始化数量和字母数字符号判定符
    int alpha=0;
    int num=0;
    int symbol =0;
    for(int i=0;s[i]!='\0';i++)//遍历密码字符串
    {
        cnt ++;
        if(s[i]<='9'&&s[i]>='0')
        {
            num=1;
        }
        else if((s[i]<='Z'&&s[i]>='A')||(s[i]>='a'&&s[i]<='z'))
        {
            alpha=1;
        }
        else
        {
            symbol=1;
        }
    }
    int n=0;
    if(cnt>6&&symbol&&num&&alpha)//满足条件返回1
    {
        n=1;
    }
    return n;
}