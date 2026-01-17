#include <stdio.h>
#include <stdlib.h>
int search(unsigned long long k)
{
    unsigned long long digits = 1;
    unsigned long long count = 9;
    unsigned long long start = 1;

    while (k > digits * count) {
        k -= digits * count;
        digits++;
        count *= 10;
        start *= 10;
    }

    unsigned long long number = start + (k - 1) / digits;
    unsigned long long index = (k - 1) % digits;
    unsigned long long pow10 = 1;
    for (unsigned long long i = 0; i < digits - index - 1; i++)
        pow10 *= 10;

    int digit = (int)((number / pow10) % 10);
    return digit;
}

int main(void)
{
    int n;
    unsigned long long k;

    if (scanf("%d", &n) != 1) return 0;
    for (int q = 0; q < n; q++) {
        if (scanf("%llu", &k) != 1) break;
        printf("%d\n", search(k));
    }
    return 0;
}