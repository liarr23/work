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
    int q;
    cin >> q;
    while(q--)
    {
        int k;
        cin >> k;
        auto upper = upper_bound(arr.begin(),arr.end(),k);
        auto lower = lower_bound(arr.begin(),arr.end(),k);
        if(lower !=arr.end())
        {
            cout << lower - arr.begin() << " ";
        }
        else
        {
            cout << n << " ";
        }
        if(upper !=arr.end())
        {
            cout << upper - arr.begin() << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
    return 0;
}