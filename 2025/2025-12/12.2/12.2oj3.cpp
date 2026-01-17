#include<iostream>
#include<cstring>
using namespace std;
void replace(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='i'&&s[i+1]=='s')
        {
            s[i]='b';
            s[i+1]='e';
            i=i+2;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
      char str[10000];
      while(cin >> str)
      {
      if(strcmp(str,"wish")!=0)
      {
      replace(str);
      cout << str << "\n";
      }
      else
      {
        cout << str << "\n";
      }
      }
      return 0;
}