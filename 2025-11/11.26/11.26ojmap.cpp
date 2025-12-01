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
            cout << dict[key] << "\n";
        }
        else
        {
            string key;
            cin >> key;
            dict.erase(key);
        }
    }
    return 0;
}