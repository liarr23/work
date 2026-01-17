#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int num,max;
    cin >> num >> max;
    vector <int> nums (num);
    int all=1;
    vector <unsigned long long int> cut (num+1);
    cut[0]=1;
    for(int i=0;i<num;i++)
    {
        cin >>nums[i];
        all*=nums[i];
        cut[i+1]=all;
    }
    int res=0;
    for(int i=0;i<=num;i++)
    {
        if(abs(cut[i]-all/cut[i])<=max)
        {
            res++;
        }
    }
    if(num%2==0)
    {
        int check=1;
    for(int i=0;i<num/2;i++)
    {
     if(nums[i]!=nums[i+num/2])
     {
            check=0;
            break;
     } 
    }
    if(check)
    {
        res--;
    }
    }
    cout << res;
    return 0;
}