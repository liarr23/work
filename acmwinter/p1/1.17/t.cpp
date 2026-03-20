#include<bits/stdc++.h>
using namespace std;
long long res=0;
void merge(int *a,int left,int right)
{
    int mid=(left+right)/2;
    int begin1=left;
    int end1=mid;
    int begin2=mid+1;
    int end2=right;
    int size = right -left +1;
    int temp[size];
    int p=0;
    while(begin1<=end1&&begin2<=end2)
    {
        if(a[begin1]>a[begin2])
        {
            res+=mid-begin1+1;
            temp[p++]=a[begin2++];
        }
        else
        {
            temp[p++]=a[begin1++];
        }
    }
    while(begin1<=end1)
    {
        temp[p++]=a[begin1++];
    }
    while(begin2<=end2)
    {
        temp[p++]=a[begin2++];
    }
    for(int i=0;i<size;i++)
    {
        a[left+i]=temp[i];
    }
}
void mergesort(int *a,int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int mid = (left + right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid+1,right);
    merge(a,left,right);
}
int main()
{
     int num;
     cin >> num;
     int nums[num];
     for(int j=0;j<num;j++)
     {
        cin >> nums[j];
     }
     mergesort(nums,0,num-1);
     cout << res ;
     return 0;
}