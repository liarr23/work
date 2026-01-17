#include <stdio.h>
int main()
{
    int  find(int a[], int n, int k);
    int n, k, m;
    int a[20]= { 10, 18, 99, 20, 50, 36, 80, 206, 989, 66, 88, 75, 166, 156, 306, 605, 258, 369, 586, 866 };
    scanf("%d%d", &n, &k);
    m=find(a, n, k);
    printf("%d", m);
    return 0;
}
int  find(int a[], int n, int k)//申明函数
{
    for(int i=0;i<n-1;i++)//排序
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return a[k-1];//返回结果
}