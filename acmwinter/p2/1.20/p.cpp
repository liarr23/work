#include<bits/stdc++.h>
using namespace std;
struct date
{
    int num;
    int time;
};
struct cmp
{
    bool operator()(date&a,date&b)
    {
        return a.num<b.num;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<date>in(n+1);
    vector<date>out(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> in[i].num;
        in[i].time=i;
    }
    for(int i=1;i<=n;i++)
    {
        cin >> out[i].num;
        out[i].time=i;
    }
    priority_queue<date,vector<date>,cmp>sold;
    long long storage=0;
    for(int i=1;i<=n;i++)
    {
        storage+=in[i].num;
        storage-=out[i].num;
        sold.push(out[i]);
        if(storage<0)
        {
            storage+=sold.top().num;
            sold.pop();
        }
    }
    int res=sold.size();
    vector<int>turn;
    while(!sold.empty())
    {
        turn.push_back(sold.top().time);
        sold.pop();
    }
    sort(turn.begin(),turn.end());
    cout << res << "\n";
    for(int i=0;i<res;i++)
    {
        cout << turn[i] << " ";
    }
}