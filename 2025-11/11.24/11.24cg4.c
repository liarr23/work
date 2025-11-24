#include<stdio.h>//头文件
#include<string.h>
int main()//主函数
{
    char arr[1000];//创建字符串
    fgets(arr, sizeof(arr), stdin);//输入字符串（可输入空格）
    int len = strlen(arr);//获取字符串长度
    if(len%2==0)
    printf("%s",arr);//输出结果
    return 0;//结束
}