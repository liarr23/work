#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        stack<int>ops;
        string op;
        cin >> op;
        int check=1;
        for(int i=0;i<op.size();i++)
        {
            if(op[i]=='(')
            {
                ops.push(1);
            }
            if(op[i]=='[')
            {
                ops.push(2);
            }
            if(op[i]=='{')
            {
                ops.push(3);
            }
            if(op[i]==')')
            {
                if(!ops.empty()&&ops.top()==1)
                {
                    ops.pop();
                }
                else
                {
                    check=0;
                    break;
                }
            }
            if(op[i]==']')
            {
                if(!ops.empty()&&ops.top()==2)
                {
                    ops.pop();
                }
                else
                {
                    check=0;
                    break;
                }
            }
            if(op[i]=='}')
            {
                if(!ops.empty()&&ops.top()==3)
                {
                    ops.pop();
                }
                else
                {
                    check=0;
                    break;
                }
            }
        }
        if(ops.empty()&&check)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}