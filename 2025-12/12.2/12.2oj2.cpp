#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int cnt =0;
        vector <int> arr1;
        vector <int> arr2;
        for(int i=1;i<=n;i++)
        {
            int num=i;
            if(num==1)
            {
                arr1.push_back(0);
            }
            else if(num==2||num==3)
            {
                arr1.push_back(1);
            }
            else
            {
                int check=1;
                for(int j=2;j<=sqrt(num);j++)
                {
                    if(num%j==0)
                    {
                        check=0;
                        break;
                    }
                }
                if(check)
                {
                    arr1.push_back(1);
                }
                else
                {
                    arr1.push_back(0);
                }
            }
        }
        for(int i=n-1;i>=0;i--)
            {
                arr2.push_back(arr1[i]);
            }
            for(int i=0;i<n;i++)
            {
                if(arr1[i]&&arr2[i])
                {
                    cnt++;
                }
            }
            cout << cnt << "\n";
    }
    return 0;
}
