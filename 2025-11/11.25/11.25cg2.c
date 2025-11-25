#include<stdio.h>//头文件
int main()//主函数
{
    char arr[1000];//创建字符串
    fgets(arr,sizeof(arr),stdin);//输入
    int isnum=1;
    for(int i=0;arr[i]!='\n';i++)//判断是否为数字
    {
        if(arr[i]<'0'||arr[i]>'9')
        {
            isnum=0;
            break;
        }
    }
    if(isnum)//输出结果
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;//结束
}