#include<stdio.h>//头文件
int main()//主函数
{
    char arr[1000];//创建字符串
    int num=0;//初始化数字总量
    int isnum=0;//初始化数字判定
    fgets(arr, sizeof(arr), stdin);//输入字符串（可输入空格）
    for(int i=0;arr[i]!='\0';i++)//遍历字符串
    {
        if(arr[i]<='9'&&arr[i]>='0')
        {
            isnum=1;
        }
        else
        {
            if(isnum)
            {
                num++;
                isnum=0;
            }
        }
    }
    printf("%d",num);//输出数量
    return 0;//结束
}