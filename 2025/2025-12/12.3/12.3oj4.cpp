#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int num;
    while(cin >> num)
    {
    int cnt=0;
    int num1=num;
    vector <string> idcards;
    string idcard;
    int nums[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int sum=0;
    while(num--)
    {
        cin >> idcard;
        idcards.push_back(idcard);
    }
    for(int i=0;i<num1;i++)
    {
        sum=0;
        for(int j=0;j<17;j++)
        {
            sum+=((int)idcards[i][j]-48)*nums[j];
        }
        int x=sum%11;
        if(m[x]!=idcards[i][17])
        {
            cnt++;
            cout << idcards[i] << "\n";
        }
    }
    if(cnt==0)
    {
        cout << "All passed\n";
    }
}
    return 0;
}