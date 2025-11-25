#include<stdio.h>//头文件
#include<string.h>
int main()//主函数
{
    char words[1000];//创建字符串
    fgets(words,sizeof(words),stdin);//输入字符串
    words[strcspn(words, "\n")]='\0';
    char *word[100];
    int cnt=0;
    char *wordd=strtok(words," ");
    while(wordd !=NULL&&cnt<100)//分割字符串
    {
        word[cnt++]=wordd;
        wordd=strtok(NULL," ");
    }
    for(int i=cnt-1;i>=0;i--)//逆序输出
    {
        printf("%s\n",word[i]);
    }
    return 0;//结束
}