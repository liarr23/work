#include<bits/stdc++.h>
using namespace std;
struct mission
{
    long long start;
    long long end;
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
    long long n;
    cin >> n;
    vector<mission>missions(n);
    long long min=0;
    for(long long i=0;i<n;i++)
    {
        cin >> missions[i].start >> missions[i].end;
        min+=missions[i].end;
    }
    sort(missions.begin(),missions.end(),cmp);
    long long e=min;
    for(long long i=0;i<n;i++)
    {
        if(e<missions[i].start)
        {
            min+=missions[i].start-e;
            e=missions[i].start;
        }
        e-=missions[i].end;
    }
    cout << min;
    return 0;
}