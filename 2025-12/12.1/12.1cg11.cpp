#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> myarr(n);
    for(int i=0;i<n;i++)
    {
        cin >> myarr[i];
    }
    auto min=min_element(myarr.begin(),myarr.end());
    auto max=max_element(myarr.begin(),myarr.end());
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=myarr[i];
    }
    cout << *min << " " << *max << " " << sum ;
    return 0;
}