#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct compare 
{
    bool operator()(long long a,long long b)
    {
        return a>b;
    }
};
int main()
{
     priority_queue<long long,vector<long long>,compare> qm;
     int n;
     cin >> n;
     while(n--)
     {
        long long op;
        cin >> op;
        if(op==1)
        {
            int x;
            cin >> x;
            qm.push(x);
        }
        else if(op==2)
        {
            if(!qm.empty())
            {
                cout << qm.top() << "\n";
            }
        }
        else if(op==3)
        {
            if(!qm.empty())
            {
                qm.pop();
            }
        }
     }
     return 0;
}