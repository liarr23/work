#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("C:\\Users\\liar\\Desktop\\work\\2025-12\\12.11\\nums.csv","r");
    char res[100];
    for(int i=0;i<3;i++)
    {
    fgets(res,100,fp);
    printf("%s",res);
    }
    int a=6*sizeof(int);
    int b=7*sizeof(int);
    int a1=400;
    int b1=200;
    fseek(fp,a,SEEK_SET);
    fseek(fp,b,SEEK_SET);
    fwrite(&a1,sizeof(int),1,fp);
    fwrite(&b1,sizeof(int),1,fp);
    fclose(fp);
    return 0;
}