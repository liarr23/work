#include<iostream>
#include<list>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n,k;
        int res;
        cin >> n >> k;
        list <int> circle;
        for(int i=0;i<n;i++)
        {
            circle.push_back(i+1);
        }
        int remove=-1;
        int del_cnt=0;
        auto it = circle.begin();
        while(!circle.empty())
        {
           ++it;
           if(it==circle.end())
           {
            it=circle.begin();
           }
           remove=*it;
           it = circle.erase(it);
           if(it==circle.end()&&!circle.empty())
           {
               it=circle.begin();
           }
           del_cnt++;
           if(del_cnt==k)
           {
            res=remove;
            break;
           }
        }
        cout << res << "\n";
    }
    return 0;
}