#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    long long hight[num];
    long long pow[num];
    for(int i=0;i<num;i++)
    {
        cin >> hight[i] >> pow[i];
    }
    stack<long long>m_left;
    stack<long long>m_right;
    vector<long long>cnt(num,0);
    for(int i=num-1;i>=0;i--)
    {
        while(!m_right.empty()&&hight[m_right.top()]<=hight[i])
        {
            m_right.pop();
        }
        if(!m_right.empty())
        {
            cnt[m_right.top()]+=pow[i];
        }
        m_right.push(i);
    }
    for(int i=0;i<num;i++)
    {
        while(!m_left.empty()&&hight[m_left.top()]<=hight[i])
        {
            m_left.pop();
        }
        if(!m_left.empty())
        {
            cnt[m_left.top()]+=pow[i];
        }
        m_left.push(i);
    }
    long long maxs=0;
    for(int i=0;i<num;i++)
    {
        if(maxs<cnt[i])
        {
            maxs=cnt[i];
        }
    }
    cout << maxs;
    return 0;
}