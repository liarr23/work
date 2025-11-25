#include<iostream>
#include<vector>
#include<algorithm>
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
    vector <int> original =arr;
    vector <int> arr_prev =original;
    if(prev_permutation(arr_prev.begin(),arr_prev.end()))
    {
        for(int x:arr_prev)
        {
            cout << x <<" ";
        }
        cout << "\n";
    }
    for(int x:arr)
    {
        cout << x << " ";
    }
    cout << "\n";
    vector <int> arr_next=original;
    if(next_permutation(arr_next.begin(),arr_next.end()))
    {
        for(int x:arr_next)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}