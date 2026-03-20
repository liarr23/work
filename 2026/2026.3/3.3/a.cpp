#include<bits/stdc++.h>
using namespace std;
int main()
{
   int m;
   cin >> m;
   while(m--)
   {
      int n,s,x;
      int res=0;
      cin >> n >> s >> x;
      for(int i=0;i<n;i++)
      {
        int num;
        cin >> num;
        res+=num;
      }
      if(res<=s&&(res-s)%x==0)
      {
        cout << "Yes\n";
      }
      else
      {
        cout << "No\n";
      }
   }
   return 0;
}