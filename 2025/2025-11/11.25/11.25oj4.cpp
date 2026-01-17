#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector <int> myvector(n);
   for(int i=0;i<n;i++)
   {
    cin >> myvector[i];
   }
   int num;
   cin >> num;
   while(num--)
   {
    int b,e,k;
    cin >> b >> e >> k;
    int cnt=count(myvector.begin()+b,myvector.begin()+e,k);
    cout << cnt <<"\n";
   }
   return 0;
}