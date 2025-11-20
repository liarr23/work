#include<stdio.h>//头文件
int main()//主函数
{
    int n;//定义数据量变量n
    scanf("%d",&n);//输入数据量n
    int arr[n];//定义数组arr
    for(int i=0;i<n;i++)//遍历输入数组元素
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)//冒泡排序法对arr数组进行升序排序
    {
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    int maxcnt=1;//定义最大出现次数变量maxcnt
    for(int i=0;i<n;i++)//遍历数组元素，得到最大出现次数以及对应数字
    {
        int cnt=1;
        for(int j=1;j<n-i;j++)
        {
          if(arr[i]==arr[i+j])
          {
                cnt++;
                if(cnt>maxcnt)
                {
                    maxcnt=cnt;
                }
            }
            else
            {
                break;
          }
        }
    }
    for(int i=0;i<n;i++)//输出出现次数等于最大出现次数的数字及其出现次数
    {
        if(arr[i]==arr[i+maxcnt-1])
        {
            printf("%d %d\n",arr[i],maxcnt);
        }
    }
    return 0;//结束
}