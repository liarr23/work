#include <stdio.h>
#include <string.h>

void addStrings(char* result, const char* num1, const char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = (len1 > len2) ? len1 : len2;
    
    char temp[100] = {0};
    int carry = 0;
    int k = maxLen;
    temp[maxLen + 1] = '\0';
    
    for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k--) {
        int sum = carry;
        if (i >= 0) sum += num1[i] - '0';
        if (j >= 0) sum += num2[j] - '0';
        
        temp[k] = (sum % 10) + '0';
        carry = sum / 10;
    }
    strcpy(result, temp + k + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    char num[n + 1][100];
    strcpy(num[0], "0");
    strcpy(num[1], "1");
    
    for(int i = 2; i <= n; i++) {
        addStrings(num[i], num[i - 1], num[i - 2]);
    }
    
    printf("%s\n", num[n]);
    return 0;
}