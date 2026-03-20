#include<bits/stdc++.h>
using namespace std;
struct line{
    int a;
    int b;
    int turn;
};
bool cmp(line x,line y)
{
    return x.a<y.a;
}
bool cmp2(line x,line y)
{
    return x.b < y.b;
}
int main()
{
    int num;
    cin >> num;
    int sum=0;
    vector<line>lines1(num);
    vector<line>lines2(num);
    for(int i=0;i<num;i++)
    {
        int a1;
        cin >> a1;
        lines1[i].a=a1;
        lines2[i].a=a1;
        lines1[i].turn=i+1;
        lines2[i].turn=i+1;
        sum+=a1;
    }
     for(int i=0;i<num;i++)
    {
        int b1;
        cin >> b1;
        lines1[i].b=b1;
        lines2[i].b=b1;
    }
    sort(lines1.begin(),lines1.begin()+num,cmp);
    sort(lines2.begin(),lines2.begin()+num,cmp2);
    sum+=lines2[0].b;
    cout << sum << "\n";
    for(int i=0;i<num;i++)
    {
        int a1=lines1[i].a;
        int b1=lines2[num-i].b;
        if(a1<b1)
        {
            cout << lines1[i].turn << " ";
        }
        else
        {
            cout << lines2[i].turn << " ";
        }
    }
}
3 5 7 8 10
9 6 4 2 1