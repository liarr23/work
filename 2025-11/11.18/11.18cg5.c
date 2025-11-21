#include<stdio.h>//系统头文件
int main()//主函数
{
    int n;//定义数据量变量n
    scanf("%d",&n);//输入数据量n
    int arr[n],arr2[n];//定义数组arr和arr2
    for(int i=0;i<n;i++)//遍历输入数组元素
    {
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];
    }
    for(int i=0;i<n-1;i++)//冒泡排序法对arr2数组进行降序排序
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr2[j]<arr2[j+1])
            {
                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    int diff=1;//定义不同数字变量diff
    for(int i=1;i<n;i++)
    {
        if(arr2[i]!=arr2[i-1])
        {
            diff++;
        }
    }//得出数字种类数diff
    int arr3[diff];//定义不同数字数组arr3
    arr3[0]=arr2[0];
    int num=1;
    for(int i=1;i<n;i++)
    {
        if(arr2[i]!=arr2[i-1])
        {
            arr3[num++]=arr2[i];
        }
    }//得到不同数字数组arr3，按从大到小排序
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<diff;j++)
        {
            if(arr[i]==arr3[j])
            {
                printf("%d ",j+1);
            }
        }
    }//输出每个数字的排名
    return 0;//结束
}