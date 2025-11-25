#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> arr(n);
    int num=1;
    for(int i=0;i<n;i++)
    {
        arr[i]=num++;
    }
    for(int x:arr)
    {
        cout << x << " ";
    }
    cout << "\n";
    while(next_permutation(arr.begin(),arr.end()))
    {
        for(int x:arr)
    {
        cout << x << " ";
    }
    cout << "\n";
    }
    return 0;
}