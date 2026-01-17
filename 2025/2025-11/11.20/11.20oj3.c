#include<stdio.h>
#include<string.h>
int main()
{
   char str[100001];
   scanf("%s",str);
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    char sytrfind[100001];
    scanf("%s",sytrfind);
    if(strstr(str,sytrfind)!=NULL)
    {
        printf("%d",strstr(str,sytrfind)-str+1);
   }
    else
    {
        printf("-1");
    }
    printf("\n");
}
return 0;
}