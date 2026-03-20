#include<bits/stdc++.h>
using namespace std;
struct mission
{
    unsigned long long start;
    unsigned long long end;
};
bool cmp(mission a,mission b)
{
    if(a.start == b.start)
    {
        return a.end < b.end;
    }
    else
    {
    return a.start > b.start;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<mission>missions(n);
    for(long long i=0;i<n;i++)
    {
        cin >> missions[i].start >> missions[i].end;
    }
    sort(missions.begin(),missions.end(),cmp);
    unsigned long long e=0;
    for(int i=n-1;i>=0;i--)
    {
        e=max(e+missions[i].end,missions[i].start);
    }
    cout << e;
    return 0;
}