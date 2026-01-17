#include <stdio.h>
#include <string.h>
int main()
{
     void  insert(char *s, char c, int n);
    char s[1000], c;
    int n;
    gets(s);
    scanf("%c",&c);
    scanf("%d",&n);
    insert(s, c, n);
    puts(s);
    return 0;
}
void  insert(char *s, char c, int n)//申明函数
{
    char temp[1000];//初始化字符串
    int j=0;
    for(int i=n-1;s[i]!='\0';i++)//暂存后半段字符串
    {
        temp[j++]=s[i];
    }
    temp[j]='\0';
    s[n-1]=c;
    s[n]='\0';
    strcat(s,temp);//拼接
}