#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string str;
    cin >> str;
    int r=0,l=0;
    if(num%2!=1)
    {
        int left=0;
        int right=0;
        int q=0;
        for(int i=0;i<num;i++)
        {
            if(str[i]=='?')
            {
                q++;
            }
            else if(str[i]=='(')
            {
                left++;
            }
            else
            {
                right++;
            }
        }
        for(int i=num-1;i>=0;i--)
        {
            if(str[i]=='?')
            {
                if(right<num/2)
                {
                str[i]=')';
                right++;
                q--;
                }
                else
                {
                    str[i]='(';
                    left++;
                    q--;
                }
            }
        }
        for(int i=0;i<num-1;i++)
        {
            if(str[i]=='(')
            {
                l++;
            }
            else
            {
                r++;
            }
            if(l==r)
            {
                break;
            }
        }
        stack<char>line;
        for(int i=0;i<num;i++)
        {
            if(line.empty())
            {
                line.push(str[i]);
            }
            else if(!line.empty()&&line.top()=='('&&str[i]==')')
            {
                line.pop();
            }
            else
            {
                line.push(str[i]);
            }
        }
        if(!line.empty())
        {
           l=r;
        }
    }
    if(l==r)
    {
        cout << ":(";
    }
    else
    {
        cout << str;
    }
    return 0;
}