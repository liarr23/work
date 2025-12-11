#include<stdio.h>
#include<string.h>
int main()
{
    void str_bin(char *str1, char *str2);
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    str_bin(s1, s2);
    puts(s1);
    return 0;
}
void str_bin(char *str1, char *str2)//定义函数,利用归并进行合并
{
    int len_s1=strlen(str1);
    int len_s2=strlen(str2);
    char temp[1000];//暂存str1
    for(int i=0;i<len_s1;i++)//归并，并忽略重复字符
    {
        temp[i]=str1[i];
    }
    int cnt_s1=0;
    int cnt_s2=0;
    int cnt=0;
    if(temp[cnt_s1]<str2[cnt_s2])
    {
        str1[cnt++]=temp[cnt_s1++];
    }
    else
    {
        str1[cnt++]=str2[cnt_s2++];
    }
    while(cnt_s1!=len_s1&&cnt_s2!=len_s2)
    {
        if(temp[cnt_s1]<str2[cnt_s2])
        {
            if(str1[cnt-1]!=temp[cnt_s1])
            {
            str1[cnt++]=temp[cnt_s1++];
            }
            else  
            {
                cnt_s1++;
            }
        }
        else
        {
            if(str1[cnt-1]!=str2[cnt_s2])
            {
            str1[cnt++]=str2[cnt_s2++];
            }
            else
            {
                cnt_s2++;
            }
        }
    }
    while(cnt_s1<len_s1-1)
    {
       if(str1[cnt-1]!=temp[cnt_s1])
       {
        str1[cnt++]=temp[cnt_s1++];
       }
       else
       {
        cnt_s1++;
       }
    }
    while(cnt_s2<len_s2-1)
    {
       if(str1[cnt-1]!=str2[cnt_s2])
       {
        str1[cnt++]=str2[cnt_s2++];
       }
       else
       {
        cnt_s2++;
       }
    }
    str1[cnt+1]='\0';//添加结束符
}