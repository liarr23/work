#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
struct point
{
    int x;
    int y;
    int keys;
    int step;
};
int r,c,t,s_x,s_y,res;
char maps[22][22];
int used[22][22][1025];
int moves[4][2]={1,0,-1,0,0,1,0,-1};
queue<point>mark;
int stop(int x,int y,int keys,int step)
{
    if(x<0||x>=r||y<0||y>=c||used[x][y][keys]||step>=t||maps[x][y]=='*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int bfs(int s_x,int s_y)
{
    point start,after;
    start.x=s_x;
    start.y=s_y;
    start.keys=0;
    start.step=0;
    used[s_x][s_y][0]=1;
    mark.push(start);
    while(!mark.empty())
    {
        start=mark.front();
        mark.pop();
        for(int i=0;i<4;i++)
        {
            after.x=start.x+moves[i][0];
            after.y=start.y+moves[i][1];
            after.step=start.step+1;
            after.keys=start.keys;
            if(stop(after.x,after.y,after.keys,after.step))
            {
                continue;
            }
            else if(maps[after.x][after.y]>='A'&&maps[after.x][after.y]<='J')
            {
                if(after.keys&1<<(maps[after.x][after.y]-'A'))
                {
                    mark.push(after);
                    used[after.x][after.y][after.keys]=1;
                }
                else
                {
                    continue;
                }
            }
            else if(maps[after.x][after.y]<='j'&&maps[after.x][after.y]>='a')
            {
                if(!(after.keys&1<<(maps[after.x][after.y]-'a')))
                {
                after.keys+=1<<(maps[after.x][after.y]-'a');
                }
                mark.push(after);
                used[after.x][after.y][after.keys]=1;
            }
            else if(maps[after.x][after.y]=='.'||maps[after.x][after.y]=='@')
            {
                mark.push(after);
                used[after.x][after.y][after.keys]=1;
            }
            else if(maps[after.x][after.y]=='^')
            {
                return after.step;
            }
        }
    }
    return -1;
}
int main()
{
    while(cin >> r >> c >> t)
    {
        memset(used,0,sizeof(used));
        memset(maps,0,sizeof(maps));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> maps[i][j];
            if(maps[i][j]=='@')
            {
                s_x=i;
                s_y=j;
            }
        }
    }
    res=bfs(s_x,s_y);
    cout << res << "\n";
    }
    return 0;
}