#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ONLINE_JUDGE
int main(int argc, char *argv[])
{
    #ifndef ONLINE_JUDGE
    FILE * fp=freopen("input.txt","r",stdin);
    if (fp==NULL)
    {
        perror("input.txt open error\n");
        exit(1);
    }
    #endif // ONLINE_JUDGE
    int a, b;
    char c;
    double res;
    while (scanf(" %c %d %d", &c, &a, &b) ==3)
    {
        if(a==2)
        {
          a=a+1;
        }
        else
        {
          a=a+2;
        }
        if(b==2)
        {
          b=b+1;
        }
        else
        {
          b=b+2;
        }
        if (a <= 0 || b <= 0)
        {
            break;
        }
        switch (c)
        {
        case '+':
            res = (double)a + b;
            break;
        case '-':
            res = (double)a - b;
            break;
        case '*':
            res = (double)a * b;
            break;
        case '/':
            res = (double)a / b;
            break;
        default:
            break;
        }
        if(res-0.1==0.0)
            printf("%.2lf HaHa\n", res);
        else
            printf("%.2lf\n", res);
    }
    return 0;
}
