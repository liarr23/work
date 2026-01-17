#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    vector <unsigned long long int> masks(n);
    for(int i=0;i<n;i++)
    {
        unsigned long long int mask = 0;
        int num;
        cin >> num;
        while(num--)
        {
            int bit;
            cin >> bit;
            mask |= (1ull << bit);
        }
        masks[i] = mask;
    }
    unsigned long long int state = 0;
    int q;
    cin >> q;
    while(q--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            int i;
            cin >> i;
            if((state >> i) & 1ull)
            {
                cout << "1" << "\n";
            }
            else 
            {
                cout << "0" << "\n";
            }
        }
        else if(op==1)
        {
            int m;
            cin >> m;
            state |= masks[m];
        }
        else if(op==2)
        {
            int m;
            cin >> m;
            state &= ~masks[m];
        }
        else if(op==3)
        {
            int m;
            cin >> m;
            state ^= masks[m];
        }
        else if(op==4)
        {
            int m;
            cin >> m;
            if((state & masks[m])==masks[m])
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if(op==5)
        {
            int m;
            cin >> m;
            if((state & masks[m]) != 0)
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if(op==6)
        {
            int m;
            cin >> m;
            if((state & masks[m]) == 0)
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if(op==7)
        {
             int m;
             cin >> m;
             cout << __builtin_popcountll(state & masks[m]) << "\n";
        }
        else if(op==8)
        {
            int m;
            cin >> m;
            cout << (state & masks[m]) << "\n";
        }
    }
    return 0;
}