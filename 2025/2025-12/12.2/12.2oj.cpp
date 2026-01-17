#include<iostream>
#include<bitset>
namespace fastIO {
    #define BUF_SIZE 100000
    //fread -> read
    bool IOerror = 0;
    inline char nc() {
        static char buf[BUF_SIZE], *p1 = buf + BUF_SIZE, *pend = buf + BUF_SIZE;
        if(p1 == pend) {
            p1 = buf;
            pend = buf + fread(buf, 1, BUF_SIZE, stdin);
            if(pend == p1) {
                IOerror = 1;
                return -1;
            }
        }
        return *p1++;
    }
    inline bool blank(char ch) {
        return ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t';
    }
    inline void read(long long int &x) {
        char ch;
        while(blank(ch = nc()));
        if(IOerror)
            return;
        for(x = ch - '0'; (ch = nc()) >= '0' && ch <= '9'; x = x * 10 + ch - '0');
    }
    #undef BUF_SIZE
};
using namespace std;
using namespace fastIO;
int main()
{
    long long t;
    long long n;
    read(t);
    for(int i=0;i<t;i++)
    {
        read(n);
        int cnt=0;
        bitset <64> bit(n);
        for(int i=0;i<64;i++)
        {
           if(bit[i]==1)
           {
            cnt++;
           }
        }
        if(cnt<=3)
           {
            cout << "Yes\n";
           }
           else
           {
            cout << "No\n";
           }
    }
    return 0;
}