#include<iostream> 
#include<bitset>
using namespace std;
struct ips {
    bitset<8> a;
    bitset<8> b;
    bitset<8> c;
    bitset<8> d;
};
int main( )
{
    int n;
    cin >> n;
    struct ips IP[n];
    int same=0;
    int A,B,C,D;
    for(int i=0;i<n;i++)
    {
        scanf("%d.%d.%d.%d",&A,&B,&C,&D);
        IP[i].a=bitset<8>(A);
        IP[i].b=bitset<8>(B);
        IP[i].c=bitset<8>(C);
        IP[i].d=bitset<8>(D);
    }
    for(int i=7;i>=0;i--)
    {
        int stable=IP[0].a[i];
        int check=1;
        for(int j = 1;j<n;j++)
        {
            if(IP[j].a[i]!=stable)
            {
                check=0;
                break;
            }
        }
        if(check)
        {
            same++;
        }
        else
        {
            for(int k=i;k>=0;k--)
            {
                IP[0].a[k]=0;
            }
            unsigned long num =IP[0].a.to_ulong();
            cout << num << ".0.0.0/" << same;
            break;
        }
    }
    if(same==8)
    {
    for(int i=7;i>=0;i--)
    {
        int stable=IP[0].b[i];
        int check=1;
        for(int j = 1;j<n;j++)
        {
            if(IP[j].b[i]!=stable)
            {
                check=0;
                break;
            }
        }
        if(check)
        {
            same++;
        }
        else
        {
            for(int k=i;k>=0;k--)
            {
                IP[0].b[k]=0;
            }
            unsigned long num =IP[0].b.to_ulong();
            cout  << A << "." << num << ".0.0/" << same;
            break;
        }
    }
}
        if(same==16)
        {
        for(int i=7;i>=0;i--)
    {
        int stable=IP[0].c[i];
        int check=1;
        for(int j = 1;j<n;j++)
        {
            if(IP[j].c[i]!=stable)
            {
                check=0;
                break;
            }
        }
        if(check)
        {
            same++;
        }
        else
        {
            for(int k=i;k>=0;k--)
            {
                IP[0].c[k]=0;
            }
            unsigned long num =IP[0].c.to_ulong();
            cout  << A << "." << B << "." << num << ".0/" << same;
            break;
        }
    }
    }
        if(same==24)
        {
        for(int i=7;i>=0;i--)
    {
        int stable=IP[0].d[i];
        int check=1;
        for(int j = 1;j<n;j++)
        {
            if(IP[j].d[i]!=stable)
            {
                check=0;
                break;
            }
        }
        if(check)
        {
            same++;
        }
        else
        {
            for(int k=i;k>=0;k--)
            {
                IP[0].d[k]=0;
            }
            unsigned long num =IP[0].d.to_ulong();
            cout  << A << "." << B << "." << C << "." << num << "/" << same;
            break;
        }
    }
    }
    if(same==32)
    {
        cout << A << "." << B << "." << C << "." << D << "/" <<same;
    }
    return 0;
}