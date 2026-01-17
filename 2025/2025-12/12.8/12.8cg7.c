#include <stdio.h>
int main()
{
    int  med(int *a, int n);
    int i, k, m;
    int a[20];
    for(i=0;i<20;i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    m=med(a, k);
    printf("%d", m);
    return 0;
}
 int  med(int *a, int n)
 {
   int res;
   for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
   }
   }
   if(n%2==0)
   {
    res=(a[n/2-1]+a[n/2])/2;
   }
   else
   {
    res=a[n/2];
   }
   return res;
 }