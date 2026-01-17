#include<stdio.h>
void strcopy(char s1[], char s2[], int m, int n);
int main()
{ char s1[100],s2[100];
  int m,n;
    gets(s1);
    scanf("%d%d",&m,&n);
    strcopy(s1,s2,m,n);
}
void strcopy(char s1[], char s2[], int m, int n)//申明函数
{
    int cnt=0;
    for(int i=m;i<m+n;i++)//复制
    {
       s2[cnt++]=s1[i];
    }
    s2[cnt]='\0';//加入结束符
    printf("%s",s2);
}