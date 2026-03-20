#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    map<string,int>dict;
    stack<string>chat;
    while(num--)
    {
        string name;
        cin >> name;
        chat.push(name);
        dict[name]=1;
    }
    while(!chat.empty())
    {
        if(dict[chat.top()]==1)
        {
            dict[chat.top()]=0;
            cout << chat.top() << "\n";
        }
        chat.pop();
    }
    return 0;
}