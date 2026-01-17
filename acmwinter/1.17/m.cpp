#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int len;
        cin >> len;
        vector<int>a;
        vector<int>b;
        for(int i=0;i<len;i++)
        {
            int ai,bi;
            cin >> ai >> bi;
            a.push_back(ai);
            b.push_back(bi);
        }
        priority_queue<int>diff_a;
        priority_queue<int>diff_b;
        int pos1=0;
        int pos2=0;
        for(int i=0;i<len;i++)
        {
            if(a[i]!=b[i])
            {
                pos1=i;
            }
        }
        for(int i=len-1;i>=0;i--)
        {
            if(a[i]!=b[i])
            {
                pos2=i;
            }
        }
        for(int i=pos2;i<=pos1;i++)
        {
            diff_a.push(a[i]);
            diff_b.push(b[i]);
        }
        if(diff_a.top()==diff_b.top())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}