#include<bits/stdc++.h>
using namespace std;
struct mission
{
    int start;
    int end;
};
struct cmp1
{
    bool operator()(mission &a,mission &b)
    {
        return a.start > b.start; 
    }
};
struct cmp2
{
    bool operator()(mission &a,mission &b)
    {
        return a.end < b.end; 
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<mission,vector<mission>,cmp1>st;
    priority_queue<mission,vector<mission>,cmp2>en;
    for(int i=0;i<n;i++)
    {
        mission a;
        cin >> a.start >> a.end;
        st.push(a);
    }
    int e=0;
    while(!st.empty())
    {
        en.push(st.top());
        st.pop();
        while(!st.empty()&&en.top().start==st.top().start)
        {
            en.push(st.top());
            st.pop();
        }
        while(!en.empty())
        {
           e+=en.top().end;
           if(e<en.top().start)
           {
            e=en.top().start;
           }
           en.pop();
        }
    }
    cout << e;
}