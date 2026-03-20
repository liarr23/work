#include<bits/stdc++.h>
using namespace std;
int N,M,D,L;
int main()
{
    cin >> N >> M >> D >> L;
    vector<int>speed;
    for(int i=0;i<N;i++)
    {
        int s;
        cin >> s;
        speed.push_back(s);
    }
    sort(speed.begin(),speed.begin()+N);
    int ans=0;
    int s=0;
    for(int i=0;i<M;i++)
    {
       ans=0;
       for(int j=0;j<N;j++)
       {
            if(!speed[j]) continue;
            if(speed[j]-ans*D>=L||(speed[j]-ans*D<0&&L==0))
            {
                ans++;
                s++;
                speed[j]=0;
            }
       } 
    }
    cout << s;
    return 0;
}