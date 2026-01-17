#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
    int num=1; 
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        arr[i]=num++;
    }
    do {
    for (int n : arr) 
    {
    cout << n ;
    }
    cout << std::endl;
} while (next_permutation(arr.begin(), arr.end()));
    }
return 0;
} 