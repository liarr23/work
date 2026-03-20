#include<iostream>
#include<queue>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int num;
    string o1,o2;
    while(cin >> num)
    {
        queue<int>step;
        stack<char>sta;
        int leave=0;
        cin >> o1 >> o2;
        for(int i=0;i<num;i++)
        {
            while((leave<num)&&(sta.empty()||sta.top()!=o2[i]))
            {
                sta.push(o1[leave++]);
                step.push(1);
            }
            if(sta.top()==o2[i])
            {
                step.push(0);
                sta.pop();
            }
        }
        int len=step.size();
        if(len!=num*2)
        {
            cout << "No.\n" << "FINISH\n";
        }
        else
        {
            cout << "Yes.\n";
            while(!step.empty())
            {
                if(step.front())
                {
                    cout << "in\n";
                }
                else
                {
                    cout << "out\n";
                }
                step.pop();
            }
            cout << "FINISH\n";
        }
    }
    return 0;
}