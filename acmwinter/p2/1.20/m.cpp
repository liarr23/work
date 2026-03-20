#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int>stick(num);
    for(int i=0;i<num;i++)
    {
        cin >> stick[i];
    }
    long long sum=0;
    int right=num-1;
    int len=0;
    while(right>=0)
    {
       if(stick[right]%2==1&&len>0)
       {
        sum++;
        len--;
       }
       len+=stick[right]/2;
       right--;
    }
    sum+=2*len/3;
    cout << sum;
    return 0;
}