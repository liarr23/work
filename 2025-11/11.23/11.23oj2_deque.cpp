#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int num;
    cin >> num;
    std :: deque<int> mydeque;
    while(num--)
    {
        int operate;
        cin >> operate;
        if(operate==0)
        {
             int d,x;
             cin >> d >> x;
             if(d==0)
             {
                mydeque.push_front(x);
             }
             else
             {
                mydeque.push_back(x);
             }
        }
        else if(operate==1)
        {
            int p;
            cin >> p;
            cout << mydeque[p] << '\n';
        }
        else
        {
            int a;
            cin >> a;
            if(a==0)
            {
                mydeque.pop_front();
            }
            else
            {
                mydeque.pop_back();
            }
        }
    }
    return 0;
}