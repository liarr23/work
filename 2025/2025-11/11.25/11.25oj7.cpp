#include<iostream>
#include<algorithm>
#include<vector>
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
        int b,m,e;
        cin >> b >> m >> e;
        rotate(arr.begin()+b,arr.begin()+m,arr.begin()+e);
    }
    cout << arr[0];
    for(int i=1;i<n;i++)
    {
        cout << " " << arr[i];
    }
    cout << "\n";
    return 0;
}