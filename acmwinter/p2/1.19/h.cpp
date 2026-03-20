#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<long long,vector<long long>,greater<long long>>stone;
    long long consum=0;
    while(n--)
    {
        int weight;
        cin >> weight;
        stone.push(weight);
    }
    while(stone.size()>1)
    {
        long long a,b;
        a=stone.top();
        stone.pop();
        b=stone.top();
        stone.pop();
        stone.push(a+b);
        consum+=a+b;
    }
    cout << consum;
    return 0;
}