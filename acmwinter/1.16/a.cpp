#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(0);
    string str;
    int n,num;
    cin >> n;
    while(n--)
    {
        stack<unsigned long long> s;
        cin >> num;
        while(num--)
    {
        cin >> str;
        if(str=="push")
        {
            unsigned long long x;
            cin >> x;
            s.push(x);
        }
        else if(str=="pop")
        {
            if(!s.empty())
            {
            s.pop();
            }
            else
            {
                cout << "Empty\n";
            }
        }
        else if(str=="query")
        {
            if(!s.empty())
            {
                cout << s.top() << "\n";
            }
            else
            {
                cout << "Anguei!\n";
            }
        }
        else if(str=="size")
        {
            cout << s.size() << "\n";
        }
    }
}
return 0;
}