#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>stu;
    int num ;
    cin >> num;
    while(num--)
    {
        int op;
        cin >> op;
        if(op==1)
        {
            string name;
            long long score;
            cin >> name >> score;
            stu[name]=score;
            cout << "OK\n";
        }
        else if(op==2)
        {
            string name;
            cin >> name;
            if(stu.find(name)==stu.end())
            {
                cout << "Not found\n";
            }
            else
            {
                cout << stu[name] << "\n";
            }
        }
        else if(op==3)
        {
            string name;
            cin >> name;
            if(stu.find(name)==stu.end())
            {
                cout << "Not found\n";
            }
            else 
            {
                stu.erase(name);
                cout << "Deleted successfully\n";
            }
        }
        else if(op==4)
        {
            cout << stu.size() << "\n";
        }
    }
    return 0;
}