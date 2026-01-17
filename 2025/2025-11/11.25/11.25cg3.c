#include<stdio.h>//头文件
int main()//主函数
{
    char arr[1000];//创建字符串
    scanf("%999s",arr);//输入
    int alpha[((int)'z')]={0};//创建判断字母是否出现的数组
    for(int i=0;arr[i]!='\0';i++)//进行判断
    {
        if(alpha[(int)arr[i]])
        {
            arr[i]='0';
        }
        else
        {
            alpha[(int)arr[i]]=1;
        }
    }
    for(int i=0;arr[i]!='\0';i++)//输出结果
    {
        if(arr[i]!='0')
        {
            printf("%c",arr[i]);
        }
    }
    return 0;//结束
}