/*#include<stdio.h>//头文件
int main()//主函数
{
    int arr[3][5];//创建一个三行五列二维数组
    for(int i=0;i<3;i++)//遍历行
    {
        for(int j=0;j<5;j++)//遍历i行所有项
        {
            scanf("%d",&arr[i][j]);//输入
        }
    }
    for(int i=0;i<3;i++)//遍历输出
    {
        for(int j=0;j<5;j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;//结束
}*/
#include<stdio.h>//头文件
int main()//主函数
{
    int arr[5][5];//创建矩阵
    int max[5];//创建每行最大数数组
    for(int i=0;i<5;i++)//遍历输入
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<5;i++)//获得每行最大值
    {
        max[i]=arr[i][0];
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]>max[i])
            {
                max[i]=arr[i][j];
            }
        }
    }
    int min=max[0];
    for(int i=0;i<5;i++)//获得每行最大值的最小值
    {
        if(max[i]<min)
        {
            min=max[i];
        }
    }
    printf("%d",min);//输出结果
    return 0;//结束
}