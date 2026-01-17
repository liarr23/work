#include<stdio.h>//头文件
int main()//主函数
{
    int n,m;//初始化行列并输入
    scanf("%d%d",&n,&m);
    int arr[n][m];//创建数组
    int rec[n][m];//创建记录最小值地址数组
    int min_index[n];//创建每行最小值数组
    for(int i=0;i<n;i++)//初始化地址记录数组
    {
        for(int j=0;j<m;j++)
        {
            rec[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)//输入数组
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)//获取每行最小
    {
        min_index[i]=arr[i][0];
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]<min_index[i])
            {
                min_index[i]=arr[i][j];
            }
        }
        for(int j=0;j<m;j++)//记录地址
        {
            if(arr[i][j]==min_index[i])
            {
                rec[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)//确认每行最小是否为没列最小
    {
        for(int j=0;j<m;j++)
        {
            if(rec[i][j])
            {
                for(int k=0;k<n;k++)
                {
                    if(arr[k][j]<min_index[i])
                    {
                        rec[i][j]=0;
                        break;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)//输出
    {
        for(int j=0;j<m;j++)
        {
            if(rec[i][j])
            {
                printf("%d %d %d\n",arr[i][j],i+1,j+1);
            }
        }
    }
    return 0;//结束
}