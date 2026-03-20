#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
    int d;
    bool operator <(const point &other) 
    const{
        if(x!=other.x)return x < other.x;
        if(y!=other.y)return y < other.y;
        return d < other.d;
    }
};
int main()
{
    string ops;
    cin >> ops;
    int end_x,end_y;
    cin >> end_x >> end_y;
    set<point>pos;
    point start;
    start.x=0;
    start.y=0;
    start.d=1;
    pos.insert(start);
    int len=ops.size();
    for(int i=0;i<len;i++)
    {
        set<point>pos_new;
        if(ops[i]=='T')
        {
            for(point pos_now : pos)
            {
                point pos_left=pos_now;
                point pos_right=pos_now;
                pos_left.d=(pos_left.d+3)%4;
                pos_right.d=(pos_right.d+1)%4;
                pos_new.insert(pos_left);
                pos_new.insert(pos_right);
            }
        }
        else
        {
            for(point pos_now : pos)
            {
            point pos_next=pos_now;
            if(pos_next.d==1)
            {
                pos_next.x++;
            }
            if(pos_next.d==2)
            {
                pos_next.y--;
            }
            if(pos_next.d==3)
            {
                pos_next.x--;
            }
            if(pos_next.d==0)
            {
                pos_next.y++;
            }
            pos_new.insert(pos_next);
            }
        }
        pos=move(pos_new);
    }
    int check=0;
    for(point pos_now : pos)
    {
        if(pos_now.x==end_x&&pos_now.y==end_y)
        {
            check=1;
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
}
