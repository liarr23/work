#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int op,b,c;
        cin >> op >> b >> c;
        if(op==0)
        {
            int min=arr[b];
            for(int i=b;i<c;i++)
            {
                if(arr[i]<min)
                {
                    min=arr[i];
                }
            }
            cout << min <<"\n";
        }
        else
        {
            int max=arr[b];
            for(int i=b;i<c;i++)
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }
            }
            cout << max <<"\n";
        }
    }
    return 0;
}