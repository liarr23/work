#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <long long int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    while(num--)
    {
        int b,e,t;
        cin >> b >> e >> t;
        swap_ranges(arr.begin()+b,arr.begin()+e,arr.begin()+t);
    }
    cout << arr[0];
    for(int i=1;i<n;i++)
    {
    cout << " " << arr[i];
    }
    cout << "\n";
    return 0;
}