#include<bits/stdc++.h>
using namespace std;
int r,c,k;
int start_x,start_y; 
int moves[1005];
int visited[1005][55][55];
int pos_x[4]={-1,0,1,0};
int pos_y[4]={0,1,0,-1};
int maps[55][55]={0};
void dfs(int d,int dx,int dy)
{
    if(visited[d][dx][dy])
    {
        return ;
    }
    visited[d][dx][dy]=1;
    if(d==0)
    {
        return;
    }
    int nx=dx;
    int ny=dy;
    while(true)
    {
        nx+=pos_x[moves[d]];
        ny+=pos_y[moves[d]];
        if(nx<0||nx>=r||ny<0||ny>=c||!maps[nx][ny])
        {
            break;
        }
        else
        {
            dfs(d-1,nx,ny);
        }
    }
}
int main()
{
    cin >> r >> c;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            char s;
            cin >> s;
            if(s=='.')
            {
                maps[i][j]=1;
            }
            if(s=='*')
            {
                start_x=i;
                start_y=j;
                maps[i][j]=1;
            }
        }
    }
    cin >> k;
    for(int i=k;i>0;i--)
    {
        string d;
        cin >> d;
        if(d=="NORTH")
        {
            moves[i]=0;
        }
        if(d=="EAST")
        {
            moves[i]=1;
        }
        if(d=="SOUTH")
        {
            moves[i]=2;
        }
        if(d=="WEST")
        {
            moves[i]=3;
        }
    }
    dfs(k,start_x,start_y);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(visited[0][i][j])
            {
                cout << "*";
            }
            else
            {
                if(maps[i][j])
                {
                    cout << ".";
                }
                else
                {
                    cout << "X";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}