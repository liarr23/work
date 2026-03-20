#include<iostream>
#include<queue>
#include<string.h>
#include<string>
#include<vector>
#include<istream>
#include<ostream>
using namespace std;
string qizz,ans;
int n,res,anss;
struct node
{
    string s;
    int step;
};
int str_to_int(const string& s) 
{
    int num = 0;
    for(int i = 0; i < 4; i++) 
    {
        if(s[i] >= '0' && s[i] <= '9') 
        {
            num = num * 10 + (s[i] - '0');
        }
    }
    return num;
}
int used[10001];
queue<node>mark;
void bfs(string qizz,string ans)
{
    node start;
    node after;
    node after_2;
    start.s=qizz;
    start.step=0;
    used[str_to_int(start.s)]=0;
    mark.push(start);
    while(!mark.empty())
    {
        start=mark.front();
        mark.pop();
        if(start.s==ans||start.step>=36)
        {
            continue;
        }
        for(int i=0;i<4;i++)
        {
             if(i==0)
             {
                after=start;
                char temp =after.s[0];
                after.s[0]=after.s[1];
                after.s[1]=temp;
                after.step++;
                if(used[str_to_int(after.s)]>after.step)
                {
                    used[str_to_int(after.s)]=after.step;
                    mark.push(after);
                }
             }
             else if(i==3)
             {
                after=start;
                char temp =after.s[3];
                after.s[3]=after.s[2];
                after.s[2]=temp;
                after.step++;
                if(used[str_to_int(after.s)]>after.step)
                {
                    used[str_to_int(after.s)]=after.step;
                    mark.push(after);
                }
             }
             else
             {
                after=start;
                after_2=start;
                char temp=after.s[i];
                after.s[i]=after.s[i-1];
                after.s[i-1]=temp;
                after_2.s[i]=after_2.s[i+1];
                after_2.s[i+1]=temp;
                after.step++;
                after_2.step++;
                if(used[str_to_int(after.s)]>after.step)
                {
                    used[str_to_int(after.s)]=after.step;
                    mark.push(after);
                }
                if(used[str_to_int(after_2.s)]>after_2.step)
                {
                    used[str_to_int(after_2.s)]=after_2.step;
                    mark.push(after_2);
                }
             }
             after=start;
             if(after.s[i]=='9')
             {
                after.s[i]='1';
             }
             else
            {
                after.s[i]++;
            }
            after.step++;
            if(used[str_to_int(after.s)]>after.step)
                {
                    used[str_to_int(after.s)]=after.step;
                    mark.push(after);
                }
            after=start;
             if(after.s[i]=='1')
             {
                after.s[i]='9';
             }
             else
            {
                after.s[i]--;
            }
            after.step++;
            if(used[str_to_int(after.s)]>after.step)
                {
                    used[str_to_int(after.s)]=after.step;
                    mark.push(after);
                }
        }
    }
}
int main()
{
    cin >> n;
    while(n--)
    {
        for(int i=0;i<10001;i++)
        {
            used[i]=50;
        }
        cin >> qizz >> ans;
        anss=str_to_int(ans);
        bfs(qizz,ans);
        res=used[anss];
        cout << res << "\n";
    }
    return 0;
}