#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cin >>num;
    std :: vector<int> myvector;
    while(num--)
    {
        int operate;
        cin >> operate;
        if(operate==0)
        {
            int n;
            cin >> n;
            myvector.push_back(n);
        }
        else if(operate==1)
        {
            int n;
            cin >> n;
            cout << myvector[n] << '\n';
        }
        else
        {
            myvector.pop_back();
        }
    }
    return 0;
}