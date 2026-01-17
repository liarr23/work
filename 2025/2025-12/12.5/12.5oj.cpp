#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        int max_page=0;
        vector <int> money(n);
        vector <int> pages(n);
        for(int i=0;i<n;i++)
        {
            cin >> money[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> pages[i];
        }
        unsigned long long int full = (1ull << n) -1;
        for(unsigned long long int i=0;i<full;i++)
        {
            int page_sum=0;
            int money_sum=0;
            for(int j=0;j<n;j++)
            {
                if(i & (1 << j))
                {
                    page_sum+=pages[j];
                    money_sum+=money[j];
                }
            }
            if(money_sum<=m)
            {
                if(page_sum>max_page)
                {
                    max_page=page_sum;
                }
            }
        }
        cout << max_page << "\n";
    }
    return 0;
}