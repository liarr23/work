#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
struct compare {
    bool operator()(int a, int b) {
        return a > b; 
    }
};
int main()
{
    int n;
    cin >> n;
    while(n --)
    {
        int cases,num;
        cin >> cases >> num;
        cout << cases << " " << (num+1)/2 << "\n";
        priority_queue<int> down;
        priority_queue<int, vector<int>, compare> up;
        for(int i=1;i<=num;i++)
        {
            int x;
            cin >> x;
            if(down.empty()||x<down.top())
            {
                down.push(x);
            }
            else
            {
                up.push(x);
            }
            if(down.size()-1<up.size())
            {
                down.push(up.top());
                up.pop();
            }
            if(down.size()-1>up.size())
            {
                up.push(down.top());
                down.pop();
            }
            if(i%2==1)
            {
                cout << down.top() << " ";
            }
            if((i+1)%20==0)
        {
            cout << "\n";
        }
        }
        cout << "\n";
    }
    return 0;
}