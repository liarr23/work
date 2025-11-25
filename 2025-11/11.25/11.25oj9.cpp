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
    auto it =unique(arr.begin(),arr.end());
    arr.erase(it,arr.end());
    auto it1 =arr.begin();
    cout << *it1;
    for(++it1;it1!=arr.end();++it1)
    {
        cout << " " << *it1;
    }
    cout << "\n";
    return 0;
}