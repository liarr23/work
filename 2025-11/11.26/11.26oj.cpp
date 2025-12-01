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
        bool found =binary_search(arr.begin(),arr.end(),k);
        if(found)
        {
            cout << "1" << "\n";
        }
        else
        {
            cout << "0" << "\n";
        }
    }
    return 0;
}