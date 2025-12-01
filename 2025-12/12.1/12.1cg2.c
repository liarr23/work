#include <stdio.h>
int main()
{
    float score(float a[], int n);
    int i;
    float k, a[10];
    for(i=0;i<10;i++)
        scanf("%f", &a[i]);
    k=score(a, 10);
    printf("%.2f", k);
    return 0;
}
float score(float a[],int n)//申明函数
{
    int cnt_zero=0;
    for(int i=0;i<n-1;i++)//冒泡排序
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                float temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    float res =0;
    for(int i=0;i<n;i++)//去除无效值
    {
        if(a[i]<0.01)
        {
            cnt_zero ++;
        }
    }
    for(int i=cnt_zero+1;i<n-1;i++)//计算平均成绩
    {
        res+=a[i];
    }
    res/=(n-2);
    return res;
}