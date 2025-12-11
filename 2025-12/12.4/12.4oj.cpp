#include<iostream>
#include<vector>
using namespace std;
int main()
{
    unsigned int m,a,b;
    while(cin >> m >> a >> b)
    {
        if(m==0)
        {
            break;
        }
        vector <int> num;
        unsigned int sum=a+b;
        if(sum==0)
        {
            cout << "0";
        }
        while(sum!=0)
        {
            if(sum%m==0)
            {
                num.push_back(0);
                sum/=m;
            }
            else
            {
                num.push_back(sum%m);
                sum/=m;
            }
        }
        for(auto it=num.rbegin();it!=num.rend();++it)
        {
            cout << *it ;
        }
        cout << "\n";
    }
    return 0;
}