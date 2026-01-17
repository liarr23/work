#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    vector <int> arr1(m);
    for(int i=0;i<m;i++)
    {
        cin >> arr1[i];
    }
    if(arr1>arr)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return 0;
}