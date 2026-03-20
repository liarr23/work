#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    queue<char>s;
    stack<char>t;
    queue<char>u;
    cin >> str;
    priority_queue<char,vector<char>,greater<char>>alpha_min;
    int len=str.size();
    for(int i=0;i<len;i++)
    {
        s.push(str[i]);
        alpha_min.push(str[i]);
    }
    while(!s.empty()&&!alpha_min.empty())
    {
        while(!s.empty()&&s.front()!=alpha_min.top())
        {
            t.push(s.front());
            s.pop();
        }
        if(!s.empty())
        {
        t.push(s.front());
        alpha_min.pop();
        s.pop();
        }
        while(!t.empty()&&t.top()<=alpha_min.top())
        {
            u.push(t.top());
            t.pop();
        }
    }
    while(!t.empty())
    {
        u.push(t.top());
        t.pop();
    }
    while(!u.empty())
    {
        cout << u.front();
        u.pop();
    }
    return 0;
}