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
    int q;
    cin >> q;
    while(q--)
    {
        long long int k;
        cin >> k;
        auto it =lower_bound(arr.begin(),arr.end(),k);
        if(it!=arr.end())
        {
            cout << it -arr.begin() << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
    return 0;
}