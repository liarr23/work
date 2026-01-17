#include<stdio.h>//头文件
#include<string.h>
int main()//主函数
{
    int n;//定义变量
    scanf("%d",&n);
    int nums[n];
    int nums_1[n];
    int ages[n];
    int ages_1[n];
    char names[n][7];
    char names_1[n][7];
    for(int i=0;i<n;i++)//输入数据
    {
        scanf("%d%s%d",&nums[i],names[i],&ages[i]);
        nums_1[i]=nums[i];
        ages_1[i]=ages[i];
        strcpy(names_1[i],names[i]);
    }
    for(int i=0;i<n-1;i++)//根据姓名排序
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(strcmp(names[j],names[j+1])>0)
            {
                int temp_num=nums[j];
                int temp_age=ages[j];
                char temp_name[7];
                strcpy(temp_name,names[j]);
                nums[j]=nums[j+1];
                nums[j+1]=temp_num;
                ages[j]=ages[j+1];
                ages[j+1]=temp_age;
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp_name);
            }
        }
    }
    for(int i=0;i<n-1;i++)//根据年龄排序
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((ages_1[j]>ages_1[j+1])||(ages_1[j]==ages_1[j+1]&&strcmp(names_1[j],names_1[j+1])>0))
            {
                int temp_num=nums_1[j];
                int temp_age=ages_1[j];
                char temp_name[7];
                strcpy(temp_name,names_1[j]);
                nums_1[j]=nums_1[j+1];
                nums_1[j+1]=temp_num;
                ages_1[j]=ages_1[j+1];
                ages_1[j+1]=temp_age;
                strcpy(names_1[j],names_1[j+1]);
                strcpy(names_1[j+1],temp_name);
            }
        }
    }
    for(int i=0;i<n;i++)//输出结果
    {
        printf("%3d%6s%3d\n",nums[i],names[i],ages[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%3d%6s%3d\n",nums_1[i],names_1[i],ages_1[i]);
    }
    return 0;
}