#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n=0;
    unsigned long long int full = (1ull << num) -1;
    for(unsigned long long int i=0;i<=full;i++)
    {
        cout << n++ << ":" ;
        for(int j=0;j<num;j++)
        {
            if(i & (1 << j))
            {
                cout << " " << j ;
            }
        }
        cout << "\n";
    }
    return 0;
}