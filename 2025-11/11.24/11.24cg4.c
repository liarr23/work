#include<stdio.h>//头文件
#include<string.h>
int main()//主函数
{
    char arr[1000];//创建字符串
    fgets(arr, sizeof(arr), stdin);//输入字符串（可输入空格）
    int len = strlen(arr);//获取字符串长度
if (len > 0 && arr[len - 1] == '\n')
{
    arr[len - 1] = '\0';  // 把 \n 替换成字符串结束符
    len--;                // 长度减 1
}
    if(len%2==0)//处理偶数长度
    {
        for(int i=0;i<len-2;i=i+2)
        {
            for(int j=0;j<len-i-2;j=j+2)
            {
                if(arr[j]<arr[j+2])
                {
                    char temp =arr[j];
                    arr[j]=arr[j+2];
                    arr[j+2]=temp;
                }
            }
        }
         for(int i=1;i<len-1;i=i+2)
        {
            for(int j=1;j<len-i-1;j=j+2)
            {
                if(arr[j]>arr[j+2])
                {
                    char temp =arr[j];
                    arr[j]=arr[j+2];
                    arr[j+2]=temp;
                }
            }
        }
    }
    else//处理奇数长度
    {
         for(int i=0;i<len-3;i=i+2)
        {
            for(int j=0;j<len-i-2;j=j+2)
            {
                if(arr[j]<arr[j+2])
                {
                    char temp =arr[j];
                    arr[j]=arr[j+2];
                    arr[j+2]=temp;
                }
            }
        }
         for(int i=1;i<len-2;i=i+2)
        {
            for(int j=1;j<len-i-1;j=j+2)
            {
                if(arr[j]>arr[j+2])
                {
                    char temp =arr[j];
                    arr[j]=arr[j+2];
                    arr[j+2]=temp;
                }
            }
        }
    }
    printf("%s",arr);//输出结果
    return 0;//结束
}