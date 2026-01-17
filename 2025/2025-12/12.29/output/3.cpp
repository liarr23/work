#include<bits/stdc++.h> 
using namespace std;

int main( )
{
    int n,time;
    cin >> n >> time;
    int times[n];
    int grades[n];
    int scores[n];
    double aves[n];
    int max[n];
    for(int i=0;i<n;i++)
    {
        cin >> times[i] >> grades[i] >> scores[i];
        aves[i]=grades[i]*1.0*scores[i]/times[i];
        max[i]=100/grades[i]*times[i];
    }
    int sum=0;
    while(time>0)
    {
    auto it_max=max_element(aves,aves+n);
    int pos=it_max-aves;
    if(time>=max[pos])
    {
        sum+=max[pos]*aves[pos];
        aves[pos]=0;
        time-=max[pos];
    }
    else
    {
        if(time%times[pos]==0)
        {
            sum+=time*aves[pos];
            time=0;
        }
        else 
        {
            sum+=aves[pos]*(time/times[pos]*times[pos]);
            time-=(time/times[pos]*times[pos]);
        }
    }
    }
    cout << sum;
    return 0;
}