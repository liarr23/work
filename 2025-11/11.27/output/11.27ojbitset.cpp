#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int q;
    cin >> q;
    bitset <64> bit(0);
    while(q--)
    {
        int op;
        cin >> op;
        if(op==0)
        {
            int i;
            cin >> i;
            cout << bit[i] <<"\n";
        }
        else if(op==1)
        {              
            int i;
            cin >> i;
            bit[i] = 1;
        }
        else if(op==2)
        {
            int i;
            cin >> i;
            bit[i] = 0;
        }
        else if(op==3)
        {
            int i;
            cin >> i;
            if(bit[i])
            {
                bit[i]=0;
            }
            else
            {
                bit[i]=1;
            }
        }
        else if(op==4)
        {
            int check =1;
            for(int i=0;i<64;i++)
            {
                if(bit[i]==0)
                {
                    check=0;
                    break;
                }
            }
            if(check)
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
             int check = 0;
             for(int i=0;i<64;i++)
             {
                if(bit[i]==1)
                {
                    check=1;
                    break;
                }
             }
             if(check)
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
            int check = 1;
             for(int i=0;i<64;i++)
             {
                if(bit[i]==1)
                {
                    check=0;
                    break;
                }
             }
             if(check)
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
             int cnt = 0;
             for(int i=0;i<64;i++)
             {
                if(bit[i]==1)
                {
                    cnt ++;
                }
             }
             cout << cnt << "\n";
        }
        else
        {
            unsigned long num = bit.to_ulong();
            cout << num << "\n";
        }
    }
    return 0;
}