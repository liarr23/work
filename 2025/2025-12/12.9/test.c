#include<stdio.h>
int main()
{
    int n=114514;
    float *n_p = &n;
    printf("%d",*n_p);
    return 0;
}