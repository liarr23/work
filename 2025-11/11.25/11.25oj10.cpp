#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <pair<int ,int>> points(n);
    for(int i=0;i<n;i++)
    {
        cin >> points[i].first >> points[i].second;
    }
    sort(points.begin(),points.end());
    for(auto it : points)
    {
        cout << it.first << " " << it.second << "\n"; 
    }
    return 0;
}