#include<stdio.h>//头文件
int main()//主函数
{
    int n1;//定义第一个数组数据量变量n1
    scanf("%d",&n1);//输入数据量n1
    int arr1[n1];//定义第一个数组arr1
    for(int i=0;i<n1;i++)//遍历输入第一个数组元素
    {
        scanf("%d",&arr1[i]);
    }
    int n2;//定义第二个数组数据量变量n2
    scanf("%d",&n2);//输入数据量n2
    int arr2[n2];//定义第二个数组arr2
    for(int i=0;i<n2;i++)//遍历输入第二个数组元素
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1-1;i++)//冒泡排序法对arr1数组进行升序排序
    {
        for(int j=0;j<n1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n1;i++)//输出arr1数组中不在arr2数组中的元素
    {
        int check=1;
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                check=0;
                break;
            }
        }
        if(check==1)
        {
            printf("%d ",arr1[i]);
        }
    }
    return 0;//结束
}