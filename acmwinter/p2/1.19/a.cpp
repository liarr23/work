#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int>cards;
    int sum1=0,sum2=0;
    while(n--)
    {
        int c;
        cin >> c;
        cards.push(c);
    }
    while(!cards.empty())
    {
        sum1+=cards.top();
        cards.pop();
        if(!cards.empty())
        {
           sum2+=cards.top();
           cards.pop();
        }
    }
    cout << sum1-sum2;
    return 0;
}