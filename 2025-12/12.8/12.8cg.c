#include <stdio.h>
#include <string.h>
int main()
{
     void  del(char *s, int n, int m);
    char s[1000];
    int n, m;
    gets(s);
    scanf("%d",&n);
    scanf("%d",&m);
    del(s, n, m);
    puts(s);
    return 0;
}
void del(char*s,int n,int m)
{
    int j=n;
    for(int i=n+m-1;s[i]!=0;i++)
    {
        s[j-1]=s[i];
        j++;
    }
    s[j-1]='\0';
}