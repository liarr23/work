#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int kill1=x-y;
    int res1,res2;
    if(z%kill1==0)
    {
        res1=z/kill1;
        if(z-(res1-1)*kill1<=y)
        {
            res1--;
        }
    }
    else
    {
        res1=z/kill1+1;
        if(z-(res1-1)*kill1<=y)
        {
            res1--;
        }
    }
    int kill2=x;
    if(z%kill2==0)
    {
        res2=z/kill2;
    }
    else
    {
        res2=z/kill2+1;
    }
    res2++;
    if(res1<res2)
    {
        cout << res1 ;
    }
    else
    {
        cout << res2 ;
    }
}