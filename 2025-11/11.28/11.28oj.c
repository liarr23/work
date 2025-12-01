#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    while(scanf("%9999s",str)==1)
    {
    int check[4]={0};
    int cnt=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='G'||str[i]=='g')
        {
            check[0]++;
            cnt++;
        }
        else if(str[i]=='P'||str[i]=='p')
        {
            check[1]++;
            cnt++;
        }
        else if(str[i]=='L'||str[i]=='l')
        {
            check[2]++;
            cnt++;
        }
        else if(str[i]=='T'||str[i]=='t')
        {
            check[3]++;
            cnt++;
        }
    }
    while(cnt>0)
    {
        if(check[0])
        {
            printf("G");
            check[0]--;
            cnt--;
        }
        if(check[1])
        {
            printf("P");
            check[1]--;
            cnt--;
        }
        if(check[2])
        {
            printf("L");
            check[2]--;
            cnt--;
        }
        if(check[3])
        {
            printf("T");
            check[3]--;
            cnt--;
        }
    }
    printf("\n");
}
    return 0;
}