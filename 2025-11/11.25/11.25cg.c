#include<stdio.h>//头文件
int main()//主函数
{
    char arr[1000];//创建字符串
    fgets(arr,sizeof(arr),stdin);//输入字符串
    int sum=0;
    for(int i=0;arr[i]!='\0';i++)//遍历字符串得到数字
    {
       if(arr[i]<='9'&&arr[i]>='0')
       {
        sum=sum*10+(int)arr[i]-48;
       }
    }
    sum+=10;//结果加十
    printf("%d",sum);//输出结果
    return 0;//结束
}