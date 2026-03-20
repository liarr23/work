#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    string str;
    cin >> str;
    stack<char>stk;
    int dele=n-m;
    for(int i=0;i<n;i++)
    {
        while(!stk.empty()&&stk.top()>str[i]&&dele>0)
        {
            stk.pop();
            dele--;
        }
        stk.push(str[i]);
    }
    string res="";
    while(!stk.empty())
    {
        res=stk.top()+res;
        stk.pop();
    }
    for(int i=0;i<m;i++)
    {
        cout << res[i];
    }
    return 0;
}