#include<bits/stdc++.h>
using namespace std;
int num,u,v,res=-100000000;
vector<int>flower(16001,0);
vector<vector<int>>node(16001);
vector<int>f(16001,0);
void dfs(int fa,int son)
{
   f[son]=flower[son];
   for(int i=0;i<node[son].size();i++)
   {
      int gs=node[son][i];
      if(gs!=fa)
      {
        dfs(son,gs);
        if(f[gs]>0)
        {
           f[son]+=f[gs];
        }
      }
   }
}
int main()
{
    cin >> num;
    for(int i=1;i<=num;i++)
    {
        cin >> flower[i];    
    }
    for(int i=1;i<=num-1;i++)
    {
        cin >> u >> v;
        node[u].push_back(v);
        node[v].push_back(u);
    }
    dfs(0,1);
    for(int i=1;i<=num;i++)
    {
        res=max(res,f[i]);
    }
    cout << res;
    return 0;
}