#include<iostream>
#include<list>
using namespace std;
int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        list <int> circle;
        for(int i=1;i<=n;i++)
        {
            circle.push_back(i);
        }
        int cnt =0;
        int num=1;
        auto it = circle.begin();
        while(cnt < n-1)
        {
            if(num==m)
                {
                    it=circle.erase(it);
                    if(it==circle.end())
                    {
                        it=circle.begin();
                    }
                    num=1;
                    cnt++;
                }
                else
                {
                    ++it;
                    num++;
                    if(it==circle.end())
                    {
                        it=circle.begin();
                    }
                }
        }
        auto res=circle.begin();
        cout << *res << "\n";
    }
    return 0;
}