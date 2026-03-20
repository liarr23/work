#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ops;
    cin >> ops;
    vector<int>move_x;
    vector<int>move_y;
    int end_x,end_y;
    cin >> end_x >> end_y;
    int cnt=0;
    int d=0;
    int len_op=ops.size();
    for(int i=0;i<len_op;i++)
    {
        if(ops[i]=='F')
        {
            cnt++;
        }
        else
        {
            if(d%2==0)
            {
                move_x.push_back(cnt);
            }
            else
            {
                move_y.push_back(cnt);
            }
            cnt=0;
            d++;
        }
    }
            if(d%2==0)
            {
                move_x.push_back(cnt);
            }
            else
            {
                move_y.push_back(cnt);
            }
    int len_x=move_x.size();
    int len_y=move_y.size();
    vector<vector<int>>dp_x(len_x+1,vector<int>(16001,0));
    vector<vector<int>>dp_y(len_y+1,vector<int>(16001,0));
    dp_x[0][8000]=1;
    dp_y[0][8000]=1;
    for(int i=0;i<len_x;i++)
    {
        if(i==0)
        {
            dp_x[i+1][8000+move_x[i]]=1;
        }
        else
        {
            for(int j=0;j<16001;j++)
            {
                if(dp_x[i][j])
                {
                dp_x[i+1][j+move_x[i]]=1;
                dp_x[i+1][j-move_x[i]]=1;
                }
            }
        }
    }
    for(int i=0;i<len_y;i++)
    {
        for(int j=0;j<16001;j++)
        {
            if(dp_y[i][j])
            {
                dp_y[i+1][j+move_y[i]]=1;
                dp_y[i+1][j-move_y[i]]=1;
            }
        }
    }
    if(dp_x[len_x][8000+end_x]&&dp_y[len_y][8000+end_y])
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}