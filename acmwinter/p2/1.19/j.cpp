#include<bits/stdc++.h>
using namespace std;
struct hand
{
    int l;
    int r;
    int l_r;
};
bool cmp(hand x, hand y)
{
    return x.l_r < y.l_r;
}
int main()
{
   int n;
   cin >> n;
   hand king;
   cin >> king.l >> king.r;
   king.l_r=king.l*king.r;
   vector<hand>hands(n);
   for(int i=0;i<n;i++)
   {
    cin >> hands[i].l;
    cin >> hands[i].r;
    hands[i].l_r=hands[i].r*hands[i].l;
   }   
   sort(hands.begin(),hands.begin()+n,cmp);
   int max=0;
   int pre=king.l;
   for(int i=0;i<n;i++)
   {
      int res=pre/hands[i].r;
      if(res>max)
      {
        max=res;
      }
      pre*=hands[i].l;
   }
   cout << max;
}