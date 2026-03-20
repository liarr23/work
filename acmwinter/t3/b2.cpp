#include<iostream>
#include<queue>
#include<string.h>
#include<map>
#include<string>
using namespace std;
string qizz,ans;
int n,res,anss;

// 添加转换函数
int str_to_int(const string& s) {
    int num = 0;
    for(int i = 0; i < 4; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
        }
    }
    return num;
}

struct node
{
    string s;
    int step;
};
int used[10001][37]={0};
queue<node>mark;

void bfs(string qizz,string ans)
{
    node start;
    node after;
    node after_2;
    start.s=qizz;
    start.step=0;
    
    // 修改这里
    used[str_to_int(start.s)][start.step]=1;
    mark.push(start);
    
    while(!mark.empty())
    {
        start=mark.front();
        mark.pop();
        
        if(start.s==ans)
        {
            res = start.step;
            return;
        }
        
        if(start.step>=36) continue;
        
        for(int i=0;i<4;i++)
        {
             if(i==0)
             {
                after=start;
                char temp =after.s[0];
                after.s[0]=after.s[1];
                after.s[1]=temp;
                after.step++;
                // 修改这里
                if(!used[str_to_int(after.s)][after.step])
                {
                    mark.push(after);
                    used[str_to_int(after.s)][after.step]=1;
                }
             }
             else if(i==3)
             {
                after=start;
                char temp =after.s[3];
                after.s[3]=after.s[2];
                after.s[2]=temp;
                after.step++;
                // 修改这里
                if(!used[str_to_int(after.s)][after.step])
                {
                    mark.push(after);
                    used[str_to_int(after.s)][after.step]=1;
                }
             }
             else
             {
                after=start;
                after_2=start;
                char temp=after.s[i];
                after.s[i]=after.s[i-1];
                after.s[i-1]=temp;
                
                char temp2=after_2.s[i];
                after_2.s[i]=after_2.s[i+1];
                after_2.s[i+1]=temp2;
                
                after.step++;
                after_2.step++;
                // 修改这里
                if(!used[str_to_int(after.s)][after.step])
                {
                    mark.push(after);
                    used[str_to_int(after.s)][after.step]=1;
                }
                // 修改这里
                if(!used[str_to_int(after_2.s)][after_2.step])
                {
                    mark.push(after_2);
                    used[str_to_int(after_2.s)][after_2.step]=1;
                }
             }
             
             // +1操作
             after=start;
             if(after.s[i]=='9')
                after.s[i]='1';
             else
                after.s[i]++;
             after.step++;
             // 修改这里
             if(!used[str_to_int(after.s)][after.step])
             {
                mark.push(after);
                used[str_to_int(after.s)][after.step]=1;
             }
             
             // -1操作
             after=start;
             if(after.s[i]=='1')
                after.s[i]='9';
             else
                after.s[i]--;
             after.step++;
             // 修改这里
             if(!used[str_to_int(after.s)][after.step])
             {
                mark.push(after);
                used[str_to_int(after.s)][after.step]=1;
             }
        }
    }
}

int main()
{
    cin >> n;
    while(n--)
    {
        memset(used,0,sizeof(used));
        while(!mark.empty()) mark.pop();
        res = -1;
        
        cin >> qizz >> ans;
        anss=str_to_int(ans);  // 修改这里
        
        bfs(qizz, ans);
        
        // 查询结果
        for(int i=0;i<=36;i++)
        {
            if(used[anss][i])
            {
                res=i;
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}