#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cin >> i;
    bitset<32>num(i);
    cout << num.count();
}