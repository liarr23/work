#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector <int> trea(n);
    for(int i=0 ;i<n;i++)
    {
        cin >> trea[i];
    }
    int chance = n-k+1;
    int left=0;
    int right=k;
    vector <int> stable;
    while(chance--)
    {
        int min,max;
        auto min1_it = min_element(trea.begin(), trea.begin()+left);
        auto max1_it = max_element(trea.begin(), trea.begin()+left);
        auto min2_it = min_element(trea.begin()+right, trea.end());
        auto max2_it = max_element(trea.begin()+right, trea.end());
        if(*min1_it>*min2_it)
        {
            min=*min2_it;
        }
        else
        {
            min=*min1_it;
        }
        if(*max1_it>*max2_it)
        {
            max=*max1_it;
        }
        else
        {
            max=*max2_it;
        }
        stable.push_back(max-min);
        left++;
        right++;
    }
    auto it= min_element(stable.begin(),stable.end());
    cout << *it ;
    return 0;
}