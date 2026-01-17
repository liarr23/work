#include <stdio.h>
#include <string.h>
int main()
{
    void print_words(char s[]);
    char s[1000];
    gets(s);
    print_words(s);
    return 0;
}
void print_words(char s[])//声明函数
{
    int is_word=0;//判断上一个是否为字母
    for(int i=0;s[i]!='\0';i++)//输出
    {
        if(s[i]==' '&&is_word)
        {
            printf("\n");
            is_word=0;
        }
        else if(s[i]!=' ')
        {
            printf("%c",s[i]);
            is_word=1;
        }
    }
}