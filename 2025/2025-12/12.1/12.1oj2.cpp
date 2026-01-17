#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    m++;
    list <int> circle;
    vector <int> turns;
    for(int i=0;i<n;i++)
    {
        circle.push_back(i+1);
    }
    auto it = circle.begin();
    while(!circle.empty())
    {
        for(int i=0;i<m-1;i++)
        {
            
            ++it;
            if(it==circle.end())
            {
                it=circle.begin();
            }
        }
        turns.push_back(*it);
        it=circle.erase(it);
        if(it==circle.end()&&!circle.empty())
        {
            it=circle.begin();
        }
    }
    for(auto it1=turns.begin();it1!=turns.end();++it1)
    {
        cout << *it1 << " ";
    }
    return 0;
}