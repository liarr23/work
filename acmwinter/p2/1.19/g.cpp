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
        vector<int>alpha_num(3,0);
        set<int>pos_a;
        set<int>pos_b;
        set<int>pos_c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                pos_a.insert(i);
                alpha_num[0]++;
            }
            else if(s[i]=='b')
            {
                pos_b.insert(i);
                alpha_num[1]++;
            }
            else if(s[i]=='c')
            {
                pos_c.insert(i);
                alpha_num[2]++;
            }
        }
        while(ops--)
        {
            char x,y;
            cin >> x >> y;
            if(alpha_num[int(x-'a')]==0)
            {
                continue;
            }
            if(x=='b'&&y=='a')
            {
                int pos=*pos_b.begin();
                s[pos]='a';
                alpha_num[1]--;
                pos_b.erase(pos);
                pos_a.insert(pos);
            }
            else if(x=='c'&&y=='a')
            {
                int pos=*pos_c.begin();
                s[pos]='a';
                alpha_num[2]--;
                pos_c.erase(pos);
                pos_a.insert(pos);
            }
            else if(x=='c'&&y=='b')
            {
                int pos=*pos_c.begin();
                s[pos]='b';
                alpha_num[2]--;
                pos_c.erase(pos);
                pos_b.insert(pos);
            }
        }
        cout << s << "\n";
    }
}