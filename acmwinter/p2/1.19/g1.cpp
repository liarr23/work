#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int len,ops;
        cin >> len >> ops;
        string s;
        cin >> s;
        int ctoa=0;
        int ctob=0;
        int btoa=0;
        int btoc=0;
        int ctobtoa=0;
        int btoctoa=0;
        for(int i=0;i<ops;i++)
        {
            char x,y;
            cin >> x >> y;
            if(x=='c'&&y=='a')
            {
                ctoa++;
            }
            if(x=='b'&&y=='a')
            {
                btoa++;
            }
            if(x=='b'&&y=='c')
            {
                btoc++;
            }
            if(x=='c'&&y=='b')
            {
                ctob++;
            }
            if(x=='c'&&y=='a')
            {
                if(btoctoa<btoc)
                {
                    btoctoa++;
                }
            }
            if(x=='b'&&y=='a')
            {
                if(ctobtoa<ctob)
                {
                    ctobtoa++;
                }
            }
        }
        for(int i=0;i<len;i++)
        {
            if(s[i]=='a')
            {
                continue;
            }
            if(s[i]=='b')
            {
                if(btoa)
                {
                    s[i]='a';
                    btoa--;
                }
                else if(ctoa&&btoc&&btoctoa)
                {
                    s[i]='a';
                    ctoa--;
                    btoc--;
                    btoctoa--;
                }
            }
            if(s[i]=='c')
            {
                if(ctoa)
                {
                    s[i]='a';
                    ctoa--;
                }
                else if(ctob&&btoa&&ctobtoa)
                {
                    s[i]='a';
                    ctob--;
                    btoa--;
                    ctobtoa--;
                }
                else if(ctob)
                { 
                    ctob--;
                    s[i]='b';
                }
            }
        }
    cout << s << "\n";
    }    
    return 0;
}