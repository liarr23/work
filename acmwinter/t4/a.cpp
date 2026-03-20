#include<bits/stdc++.h>
using namespace std;
int n,start,step;
vector<int>jump(1000001,1000000);
queue<int>process;
void bfs(int tot)
{
    jump[1]=0;
    process.push(1);
    while(!process.empty())
    {
        start=process.front();
        process.pop();
        step=jump[start]+1;
        if(start*2<=tot)
        {
            if(jump[start*2]>step)
            {
            process.push(start*2);
            jump[start*2]=step;
            }
        }
        if(start+1<=tot)
        {
            if(jump[start+1]>step)
            {
            process.push(start+1);
            jump[start+1]=step;
            }
        }
        if(start-1>=1)
        {
            if(jump[start-1]>step)
            {
            process.push(start-1);
            jump[start-1]=step;
            }
        }
    }
}
int main()
{
    cin >> n;
    bfs(n);
    cout << jump[n];
    return 0;
}