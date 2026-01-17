#include<iostream>
using namespace std;
void slect_sort(int a[],int n)
{
    int i_min;
    for(int i=0;i<n;i++)
    {
        i_min=i;
        for(int j=i;j<n;j++)
        {
           if(a[i_min]>a[j])
           {
            i_min=j;
           }
        }
        int temp=a[i];
        a[i]=a[i_min];
        a[i_min]=temp;
    }
}
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    slect_sort(a,10);
    for(int i=0;i<10;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}