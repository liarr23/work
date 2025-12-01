#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int num;
    cin >> num;
    multimap <string,int> mymap;
    while(num--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            string key;
            int val;
            cin >> key >> val;
            mymap.insert({key,val});
        }
        else if(op==1)
        {
            string key;
            cin >> key;
            auto range = mymap.equal_range(key);
                for(auto it = range.first;it!=range.second;++it)
                {
                    cout << it->second << "\n";
                }
            
        }
        else if(op==2)
        {
            string key;
            cin >> key;
            mymap.erase(key);
        }
        else
        {
            string l,r;
            cin >> l >> r;
            auto it = mymap.lower_bound(l);
            auto up = mymap.upper_bound(r);
            while(it !=up)
            {
                string key_now =it->first;
                auto range = mymap.equal_range(key_now);
                for(auto it1=range.first;it1!=range.second;++it1)
                {
                    cout << key_now << " ";
                    cout << it1->second << "\n";
                }
                it =range.second;
            }
        }
    }
    return 0;
}