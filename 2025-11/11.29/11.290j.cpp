#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    char num1[10000];
    string num2;
    while(scanf("%s ",num1)==1)
    {
        int n1=0,n2=0;
        int cnt=0;
        int check_num1=1;
        for(int i=0;num1[i]!='\0';i++)
        {
            if(num1[i]<='9'&&num1[i]>='0')
            {
               n1=n1*10+(int)num1[i]-48;
            }
            else
            {
                check_num1=0;
            }
        }
        if(n1>1000)
        {
           check_num1=0;
        }
        if(check_num1)
        {
            cout << n1 << " + " ;
            cnt ++;
        }
        else  
        {
            cout << "? + ";
        }
        getline(cin,num2);
        int check_num2=1;
        for(auto it = num2.begin();it!=num2.end();++it)
        {
            if(*it<='9'&&*it>='0')
            {
               n2=n2*10+(int)*it-48;
            }
            else
            {
                check_num2=0;
            }
        }
        if(n2>1000)
        {
           check_num2=0;
        }
        if(check_num2)
        {
            cout << n2 << " = " ;
            cnt ++;
        }
        else  
        {
            cout << "? =  ";
        }
        if(cnt==2)
        {
            cout << n1+n2 << "\n";
        }
        else
        {
            cout << "?\n";
        }
    }
}