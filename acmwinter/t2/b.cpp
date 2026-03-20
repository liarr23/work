#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int num;
        cin >> num;
        vector<int>a(num);
        for(int i=0;i<num;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int s=0;
        for(int i=num-1;i>0;i--)
        {
            if(a[i-1]<i&&a[i]>i)
            {
                s++;
            }
        }
        if(a[0]!=0)
        {
            s++;
        }
        if(a[num-1]<num)
        {
            s++;
        }
        cout << s << "\n";
    }
    return 0;
}