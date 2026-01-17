#include<iostream>
#include<stack>
#include<string>
#include<queue>
using namespace std;
int main()
{
    int num;
    string o1,o2;
    stack<int> s;
    queue<int> turn;
    while(cin >> num)
    {
        cin >> o1 >> o2;
    int leave=0;
    for(int i=0;i<num;i++)
    {
        if(o1[i]!=o2[leave])
        {
           s.push(o1[i]-'0');
           turn.push(1);
        }
        else
        {
            turn.push(1);
            turn.push(0);
            leave++;
        }
        while(!s.empty()&&s.top()==(int)(o2[leave]-'0'))
        {
            s.pop();
            turn.push(0);
            leave++;
        }
    }
    if(turn.size()!=num*2)
    {
        cout << "No.\n" << "FINISH\n";
    }
    else
    {
        cout << "Yes.\n";
        while(!turn.empty())
        {
            if(turn.front())
            {
                cout << "in\n";
            }
            else
            {
                cout << "out\n";
            }
            turn.pop();
        }
        cout << "FINISH\n";
    }
    }
    return 0;
}