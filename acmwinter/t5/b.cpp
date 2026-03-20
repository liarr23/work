#include<iostream>
#include<vector>
using namespace std;
int tot,n,m,a,b;
int main()
{
   cin >> tot;
   while(tot--)
   {
       cin >> n >> m;
       int min_num=1e9;
       vector<int>vis(n+1);
       vector<vector<int>>hate(n+1);
       vector<vector<int>>behated(n+1);
       long long res=0;
       int cnt=0;
       while(m--)
       {
        cin >> a >> b;
        hate[a].push_back(b);
        behated[b].push_back(a);
       }
       while(cnt!=n)
       {
        for(int i=n;i>=1;i--)
        {
            if(cnt==n)
            {
                break;
            }
            int check=1;
            if(!vis[i])
            {
                for(int j=0;j<hate[i].size();j++)
                {
                    if(vis[hate[i][j]])
                    {
                        check=0;
                        break;
                    }
                }
                for(int j=0;j<behated[i].size();j++)
                {
                    if(!vis[behated[i][j]])
                    {
                        check=0;
                        break;
                    }
                }
            }
            else
            {
                check=0;
            }
            if(check)
            {
                if(min_num>i)
                {
                    min_num=i;
                }
                res+=min_num;
                vis[i]=1;
                cnt++;
            }
        }
       }
       cout << res << "\n";
   }
   return 0;
}