#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    vector <int> arr1(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    vector <int> arr2(m);
    for(int i=0;i<m;i++)
    {
        cin >> arr2[i];
    }
    if(includes(arr1.begin(),arr1.end(),arr2.begin(),arr2.end()))
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return 0;
}