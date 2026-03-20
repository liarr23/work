#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>down;
    priority_queue<int,vector<int>,greater<int>>up;
    int num_add,num_get;
    cin >> num_add >> num_get;
    int add[num_add+1];
    int get[num_get+1];
    for(int i=1;i<=num_add;i++)
    {
        cin >> add[i];
    }
    get[0]=0;
    for(int i=1;i<=num_get;i++)
    {
        cin >> get[i];
    }
    int cnt=0;
    for(int i=1;i<=num_get;i++)
    {
        for(int j=get[i-1]+1;j<=get[i];j++)
        {
            if(!up.empty()&&add[j]>up.top())
            {
                up.push(add[j]);
            }
            else
            {
                down.push(add[j]);
            }
        }
    cnt++;
    while(down.size()<cnt)
    {
        down.push(up.top());
        up.pop();
    }
    while(down.size()>cnt)
    {
        up.push(down.top());
        down.pop();
    }
    cout << down.top() << "\n";
    }
    return 0;
}