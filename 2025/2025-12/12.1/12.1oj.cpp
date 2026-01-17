#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    long long int n;
    while(cin >> n)
    {
        string str;
        if(n==0)
        {
            cout << n << "\n";
        }
        else
        {
            while(n!=0)
            {
                int r = n % (-2);
                n = n / (-2);
                if(r>=0)
                {
                    if(r==0)
                    {
                        str+='0';
                    }
                    else
                    {
                        str+='1';
                    }
                }
                if(r<0)
                {
                    r+=2;
                    n++;
                    if(r==0)
                    {
                        str+='0';
                    }
                    else
                    {
                        str+='1';
                    }
                } 
            }
            reverse(str.begin(), str.end());
            cout << str << "\n";
        }
    }
    return 0;
}