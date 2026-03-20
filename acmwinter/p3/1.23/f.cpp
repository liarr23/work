#include<bits/stdc++.h>
using namespace std;
struct point
{
    double x;
    double y;
};
double dis(point a,point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main()
{
    int n;
    cin >> n;
    point start;
    start.x=0;
    start.y=0;
    vector<point>points(n+1);
    vector<vector<double>>dp(n+1,vector<double>(1<<n,1e9));
    for(int i=1;i<=n;i++)
    {
        cin >> points[i].x >> points[i].y;
        dp[i][1<<(i-1)]=dis(points[i],start);
    }
    for(int j=1;j<=(1<<n)-1;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(!(j&(1<<(i-1))))
            {
                continue;
            }
            for(int k=1;k<=n;k++)
            {
                dp[i][j]=min(dp[i][j],dp[k][j-(1<<(i-1))]+dis(points[i],points[k]));
            }
        }
    }
    double res=1e9;
    for(int i=1;i<=n;i++)
    {
        res=min(res,dp[i][(1<<n)-1]);
    }
    printf("%.2lf",res);
    return 0;
}