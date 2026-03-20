#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    int mem,num;
    cin >> mem >> num;
    int used=0;
    int check=0;
    while(num--)
    {
        int x;
        cin >>x;
        if(dq.empty())
        {
            dq.push_back(x);
            used++;
            check++;
        }
        else
        {
            auto it=find(dq.begin(),dq.end(),x);
            if(it==dq.end())
            {
                if(used==mem)
                {
                    dq.pop_front();
                    dq.push_back(x);
                    check++;
                }
                else
                {
                    dq.push_back(x);
                    used++;
                    check++;
                }
            }
        }
    }
    cout << check;
    return 0;
}