#include<stdio.h>//头文件
void mergesort(int arr3[],int arr1[],int arr2[],int n1,int n2)//定义合并排序函数
{    
int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n1)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr3[k++]=arr2[j++];
    }
}
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
    int arr3[n1+n2];//定义合并后数组arr3
    for(int i=0;i<n2;i++)//遍历输入第二个数组元素
    {
        scanf("%d",&arr2[i]);
    }
    mergesort(arr3,arr1,arr2,n1,n2);//调用合并排序函数
    for(int i=0;i<n1+n2-1;i++)//输出合并后数组元素
    {
        printf("%d ",arr3[i]);
    }
    printf("%d",arr3[n1+n2-1]);//输出最后一个元素
    return 0;//结束
}