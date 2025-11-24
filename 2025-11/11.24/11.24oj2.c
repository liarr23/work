#include <stdio.h>
#include <string.h>

int main() 
{
    char line[100];
    while (fgets(line, sizeof(line), stdin)) 
    {
        long long total;
        char *token = strtok(line, " \n\r");
        total = atoll(token); 

        while ((token = strtok(NULL, " \n\r")) != NULL) 
        {
            char op = token[0];
            token = strtok(NULL, " \n\r");
            if (!token) 
            {
                break;
            }
            long long num = atoll(token);
            if (op == '+') 
            {
                total += num;
            }
            else 
            {
                total -= num;
            }
        }
        printf("%lld\n", total);
    }
    return 0;
}