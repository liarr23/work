#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ops;
    cin >> ops;
    int end_x;
    int end_y;
    cin >> end_x >> end_y;
    vector<set<pair<int,int>>>pos(4);
    pos[0].insert({0,0});
    int len=ops.size();
    for(int i=0;i<len;i++)
    {
        vector<set<pair<int,int>>>pos_new(4);
        if(ops[i]=='T')
        {
        for(int j=0;j<4;j++)
        {
            for(const auto &it :pos[j])
            {
                pos_new[(j+3)%4].insert({it.first,it.second});
                pos_new[(j+1)%4].insert({it.first,it.second}); 
            }
        }
        }
        else
        {
            for(int j=0;j<4;j++)
            {
                for(const auto &it:pos[j])
                {
                 if(j==0)
                 {
                    pos_new[j].insert({it.first+1,it.second});
                 }
                 else if(j==1)
                 {
                    pos_new[j].insert({it.first,it.second-1});
                 }
                 else if(j==2)
                 {
                    pos_new[j].insert({it.first-1,it.second});
                 }
                 else
                 {
                    pos_new[j].insert({it.first,it.second+1});
                 }
                }
            }
        }
        pos=move(pos_new);
    }
    int check=0;
    for(int i=0;i<4;i++)
    {
        for(const auto &it:pos[i])
        {
            if(it.first==end_x&&it.second==end_y)
            {
                check=1;
                break;
            }
        }
        if(check==1)
        {
            break;
        }
    }
    if(check)
    {
        cout << "Yes";
    }
    else 
    {
        cout << "No";
    }
    return 0;
}