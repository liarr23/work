#include<iostream>
#include<list>
using namespace std;
int main()
{
    int q;
    cin >> q;
    std :: list<int> mylist;
    auto ptr = mylist.end();
    while(q--)
    {
        int operate;
        cin >> operate;
        if(operate==0)
        {
           int x;
           cin >> x;
           ptr=mylist.insert(ptr,x);
        }
        else if(operate ==1)
        {
           int d;
           cin >> d;
           if(d>0)
           {
            while(d--)
            {
                ++ptr;
            }
           }
           else
           {
            while(d++)
            {
                --ptr;
            }
           }
        }
        else
        {
            ptr=mylist.erase(ptr);
        }
    }
    for(auto i=mylist.begin();i!=mylist.end();++i)
    {
        cout << *i <<'\n';
    }
    return 0;
}