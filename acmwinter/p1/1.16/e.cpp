#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string input ;
    int num=0;
    while(cin >> input)
    {
        if(input[0]=='-')
        {
            break;
        }
        num++;
        stack<int> pos;
        int r=0;
        int l=0;
        int op=0;
        int len=input.size();
        for(int i=0;i<len;i++)
        {
            if(input[i]=='{')
            {
                pos.push(i);
            }
            else
            {
                if(pos.empty())
                {
                    r++;
                }
                else
                {
                    pos.pop();
                }
            }
        }
        l=pos.size();
        op=(l+1)/2+(r+1)/2;
        cout << num << ". " << op << "\n";
    }
    return 0;
}