#include<stdio.h>
#include<stdlib.h>
struct point2d {
    int p[2];
};
int main()
{
    struct point2d points[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d%d",&points[i].p[0],&points[i].p[1]);
    }
    FILE *fp;
    fp=fopen("C:\\Users\\liar\\Desktop\\work\\2025-12\\12.11\\points.dat","wb");
    if (!fp) {
        perror("无法创建文件");
        return 1;
    }
    for(int i=0;i<5;i++)
    {
        fwrite(&points[i].p[0],sizeof(int),1,fp);
        fwrite(&points[i].p[1],sizeof(int),1,fp);
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