#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string a,b;
    while(cin >> a >> b)
    {
    int len_a=a.size();
    int len_b=b.size();
    int len_max; 
    vector <int> res;
    if(a[0]!='-'&&b[0]!='-')//两正数
    {
    if(len_a>len_b)
    {
        len_max=len_a;
        for(int i=0;i<len_a+1;i++)
        {
            res.push_back(0);
        }
    }
    else
    {
        len_max=len_b;
        for(int i=0;i<len_b+1;i++)
        {
            res.push_back(0);
        }
    }
    if(len_a>len_b)
    {
        for(int i=1;i<=len_b;i++)
        {
            if((int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1]<=9)
            {
                res[i-1]=(int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1];
            }
            else
            {
                res[i-1]=((int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1])%10;
                res[i]+=1;
            }
        }
        for(int i=len_b+1;i<=len_a;i++)
        {
            if((res[i-1]+(int)a[len_a-i]-48)<=9)
            {
                res[i-1]=res[i-1]+(int)a[len_a-i]-48;
            }
            else
            {
                res[i-1]=(res[i-1]+(int)a[len_a-i]-48)%10;
                res[i]+=1;
            }
        }
    }
    else
    {
        for(int i=1;i<=len_a;i++)
        {
            if((int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1]<=9)
            {
                res[i-1]=(int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1];
            }
            else
            {
                res[i-1]=((int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1])%10;
                res[i]+=1;
            }
            for(int i=len_a+1;i<=len_b;i++)
        {
            if((res[i-1]+(int)b[len_b-i]-48)<=9)
            {
                res[i-1]=res[i-1]+(int)b[len_b-i]-48;
            }
            else
            {
                res[i-1]=(res[i-1]+(int)b[len_b-i]-48)%10;
                res[i]+=1;
            }
        }
        }
    }
    if(res[len_max]==0)
    {
        for(int i=len_max-1;i>=0;i--)
        {
            cout << res[i];
        }
        cout << '\n';
    }
    else
    {
        for(int i=len_max;i>=0;i--)
        {
            cout << res[i];
        }
        cout << '\n';
    }
}
    else if(a[0]=='-'&&b[0]=='-')//两负数
    {
        if(len_a>len_b)
    {
        len_max=len_a-1;
        for(int i=0;i<len_a;i++)
        {
            res.push_back(0);
        }
    }
    else
    {
        len_max=len_b-1;
        for(int i=0;i<len_b;i++)
        {
            res.push_back(0);
        }
    }
    if(len_a>len_b)
    {
        for(int i=1;i<=len_b-1;i++)
        {
            if((int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1]<=9)
            {
                res[i-1]=(int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1];
            }
            else
            {
                res[i-1]=((int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1])%10;
                res[i]+=1;
            }
        }
        for(int i=len_b;i<=len_a-1;i++)
        {
            if((res[i-1]+(int)a[len_a-i]-48)<=9)
            {
                res[i-1]=res[i-1]+(int)a[len_a-i]-48;
            }
            else
            {
                res[i-1]=(res[i-1]+(int)a[len_a-i]-48)%10;
                res[i]+=1;
            }
        }
    }
    else
    {
        for(int i=1;i<=len_a-1;i++)
        {
            if((int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1]<=9)
            {
                res[i-1]=(int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1];
            }
            else
            {
                res[i-1]=((int)a[len_a-i]+(int)b[len_b-i]-96+res[i-1])%10;
                res[i]+=1;
            }
            for(int i=len_a;i<=len_b-1;i++)
        {
            if((res[i-1]+(int)b[len_b-i]-48)<=9)
            {
                res[i-1]=res[i-1]+(int)b[len_b-i]-48;
            }
            else
            {
                res[i-1]=(res[i-1]+(int)b[len_b-i]-48)%10;
                res[i]+=1;
            }
        }
        }
    }
    if(res[len_max]==0)
    {
        cout << '-';
        for(int i=len_max-1;i>=0;i--)
        {
            cout << res[i];
        }
        cout << '\n';
    }
    else
    {
        cout << '-';
        for(int i=len_max;i>=0;i--)
        {
            cout << res[i];
        }
        cout << '\n';
    }
}
}
else if(a[0]=='-'&&b[0]!='-')//a负b正
{
    int len_a = a.size()-1;
    int len_b = b.size();
    if(len_a<len_b)
    {
        vector <int> res;
        for(int i=0;i<len_b;i++)
        {
            res.push_back(0);
        }
         for(int i=1;i<=len_a;i++)
        {
            if(-(int)a[len_a-i]+(int)b[len_b-i]+res[i-1]>=0)
            {
                res[i-1]=-(int)a[len_a-i]+(int)b[len_b-i]+res[i-1];
            }
            else
            {
                res[i-1]=(int)a[len_a-i]-(int)b[len_b-i]-res[i-1];
                res[i]-=1;
            }
        }
        for(int i=len_a+1;i<=len_b;i++)
        {
            if((res[i-1]+(int)b[len_b-i]-48)>=0)
            {
                res[i-1]=res[i-1]+(int)b[len_b-i]-48;
            }
            else
            {
                res[i-1]=(res[i-1]+(int)b[len_b-i]-48)%10;
                res[i]-=1;
            }
        }
        for(int i=len_b-1;i>=0;i--)
        {
            cout << res[i];
        }
        cout << '\n';
    }
    else if(len_a>len_b)
    {
        vector <int> res;
        for(int i=0;i<len_a;i++)
        {
            res.push_back(0);
        }
         for(int i=1;i<=len_b;i++)
        {
            if((int)a[len_a-i]-(int)b[len_b-i]+res[i-1]>=0)
            {
                res[i-1]=(int)a[len_a-i]-(int)b[len_b-i]+res[i-1];
            }
            else
            {
                res[i-1]=-(int)a[len_a-i]+(int)b[len_b-i]-res[i-1];
                res[i]-=1;
            }
        }
        for(int i=len_b+1;i<=len_a;i++)
        {
            if((res[i-1]+(int)a[len_b-i]-48)<=9)
            {
                res[i-1]=res[i-1]+(int)a[len_b-i]-48;
            }
            else
            {
                res[i-1]=(res[i-1]+(int)a[len_b-i]-48)%10;
                res[i]+=1;
            }
        }
        for(int i=len_b-1;i>=0;i--)
        {
            cout << res[i];
        }
        cout << '\n';
    }
}
    return 0;
}