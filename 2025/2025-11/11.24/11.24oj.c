#include <stdio.h>

int main() {
    char a[10], b[10];
    while (scanf("%s%s", a, b) != EOF) {
        int sum = 0, sum1 = 0;

        for (int i = 0; a[i] != '\0'; i++) {
            sum = sum * 16;
            if ('0' <= a[i] && a[i] <= '9') {
                sum += a[i] - '0';
            } else {
                sum += a[i] - 'a' + 10;  
            }
        }

        for (int i = 0; b[i] != '\0'; i++) {
            sum1 = sum1 * 16;
            if ('0' <= b[i] && b[i] <= '9') {
                sum1 += b[i] - '0';
            } else {
                sum1 += b[i] - 'a' + 10;
            }
        }

        int sum2 = sum + sum1;
        char res[11];
        int num = 0;
        do {
            int r = sum2 % 16;
            if (r < 10) {
                res[num++] = r + '0';
            } else {
                res[num++] = r - 10 + 'a';
            }
            sum2 /= 16;
        } while (sum2 != 0);
        for (int i = 0; i < num / 2; i++) {
            char temp = res[i];
            res[i] = res[num - 1 - i];
            res[num - 1 - i] = temp;
        }
        res[num] = '\0';

        printf("%s\n", res);
    }
    return 0;
}