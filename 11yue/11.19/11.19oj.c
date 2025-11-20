#include<stdio.h>
#include<stdlib.h>
int main()
{
    char code[100][250];
    int num=0;
    while(scanf("%249s",code[num++])==1)
    {
        char hex[3];
        for(int i=0;code[num-1][i]!='\0';i+=2)
        {
            hex[0]=code[num-1][i];
            hex[1]=code[num-1][i+1];
            hex[2]='\0';
            int ascii_sum=strtol(hex,NULL,16);
            printf("%c",ascii_sum);
        }
        printf("\n");
    }
    return 0;
}