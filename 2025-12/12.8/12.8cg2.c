#include <stdio.h>
#include <string.h>
void input_discount(int *a)
{
    while(1)
    {
        scanf("%d",a);
        if(*a>=0&&*a<=100)
            break;
    }
}
int main()//主函数
{
    int a;//定义变量
    input_discount(&a);//调用函数输入地址
    printf("%d",a);//输出
    return 0;//结束
}