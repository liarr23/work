#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        if(n==0&&m==0)
        {
            break;
        }
        set <int>cars;
        int car;
        for(int i=0;i<m+n;i++)
        {
            cin >> car;
            cars.insert(car);
        } 
        auto it=cars.begin();
        ++it;
        auto it1=cars.begin();
        int max=*it1;
        while(it!=cars.end())
        {
            if((*it-*it1)>max)
            {
                max=*it - *it1;
            }
            ++it;
            ++it1;
        }
        cout << max <<"\n";
    }
    return 0;
}