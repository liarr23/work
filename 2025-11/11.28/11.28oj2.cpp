#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n != 0)
    {
        vector <int> color(n);
        for(int i=0;i<n;i++)
        {
            cin >> color[i];
        }
        unordered_map <int,int> freq;
        for(int i=0;i<n;i++)
        {
            freq[color[i]]++;
        }
        int ans=-1;
        for(auto &it :freq)
        {
            if(it.second>n/2)
            {
                ans=it.first;
                break;
            }
        }
        if(ans==-1)
        {
            cout << "NO COLOR\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
    return 0;
}