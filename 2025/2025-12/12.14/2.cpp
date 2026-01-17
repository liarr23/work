#include<bits/stdc++.h> 

using namespace std;

int main( )
{
    int a,b,c;
    cin >> a >> b >> c;
    int cnt=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            int wrong = 0;
            if(!(i&j)!=a)
            {
                wrong ++;
            }
            if((!(i|j))!=b)
            {
                wrong ++;
            }
            if((i^j)!=c)
            {
                wrong ++;
            }
            if(wrong<=1)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}