#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int len,pos_l=-1,pos_r=-1;
        cin >> len;
        vector<int>per(len);
        for(int i=0;i<len;i++)
        {
            cin >> per[i];
        }
        for(int i=0;i<len;i++)
        {
            if(per[i]!=len-i)
            {
                pos_l=i;
                break;
            }
        }
        if(pos_l!=-1)
        {
        for(int i=pos_l;i<len;i++)
        {
            if(len-pos_l==per[i])
            {
                pos_r=i;
                break;
            }
        }
        }
        if(pos_l!=-1)
        {
            for(int i=0;i<pos_l;i++)
        {
            cout << per[i] << " ";
        }
        for(int i=pos_r;i>=pos_l;i--)
        {
           cout << per[i] << " "; 
        }
        for(int i=pos_r+1;i<len;i++)
        {
            cout << per[i] << " ";
        }
        }
        else
        {
            for(int i=0;i<len;i++)
            {
                cout << per[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}