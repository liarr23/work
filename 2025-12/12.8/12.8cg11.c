#include <stdio.h>
#include <string.h>
int main()
{    int str_r_index(char *s, char *t);
    char s[100], t[100];
    gets(s);
    gets(t);
    printf("%d", str_r_index(s, t));
    return 0;
}
int str_r_index(char *s, char *t)//定义函数
{
    int pos=-1;
    int len =strlen(s);
    int len_1=strlen(t);
    for(int i=len-1;i>=0;i--)//寻找位置
    {
        int check=1;
        for(int j=len_1-1;j>=0;j--)
        {
            if(t[j]!=s[i-len_1+1+j])
            {
                check=0;
                break;
            }
        }
        if(check)
        {
            pos=i-len_1+1;
            break;
        }
    }
    return pos;//返回值
}