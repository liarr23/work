#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int num;
    cin >> num;
    map <string,long long int> dict;
    while(num--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            string key;
            int val;
            cin >> key >> val;
            dict[key]=val;
        }
        else if(op==1)
        {
            string key;
            cin >> key;
            if(dict.find(key)!=dict.end())
            {
            cout << dict[key] << "\n";
            }
            else
            {
                cout << "0" <<"\n";
            }
        }
        else if(op==2)
        {
            string key;
            cin >> key;
            dict.erase(key);
        }
        else
        {
            string l,r;
            cin >> l >> r;
            auto low = dict.lower_bound(l);
            auto up = dict.upper_bound(r);
            for(auto it=low;it!=up;++it)
            {
                cout << it->first << " " << it->second << "\n";
            }
        }
    }
    return 0;
}