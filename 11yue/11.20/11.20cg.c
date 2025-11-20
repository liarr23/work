#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define ONLINE_JUDGE

int main(int argc, char *argv[])
{
#ifndef ONLINE_JUDGE
    FILE *fp = freopen("input.txt", "r", stdin);
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
#endif
    char name[20]; 
    char temp[20] = "20250";
    char names_id[20][20]; 
    int scores[20][4];     
    int N, i = 0;
    scanf("%d", &N);
    int N1 = N;

    while (N1--)
    {
        scanf("%s", name);
        int strLength = strlen(temp);
        // strcat str try sprintf to improve
        {
            temp[strLength] = '0' + (i + 1) / 10;
            temp[strLength + 1] = '0' + (i + 1) % 10;
            temp[strLength + 2] = ':';
            temp[strLength + 3] = '\0';
            strcat(temp, name);
        }

        names_id[i]=strdup(temp);

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &scores[i][j]);
        }
        i++;
    }

    // find max score and min score
    int max_score, min_score;
    int sum;
    int max_i, min_i;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            sum += scores[i][j];
            if (scores[i][j] > max_score)
            {
                max_score = scores[i][j];
                max_i = i;
            }
            if (scores[i][j] < min_score)
            {
                min_score = scores[i][j];
                min_i = i;
            }
        }
        scores[i][3] = sum / 3;
    }
    printf("%s %d\n", names_id[max_i], max_score);
    printf("%s %d\n", names_id[min_i], min_score);

    // bubble_sort by average_score
    int average_score[20];
    for (int i = 0; i < N; i++)
    {
        average_score[i] = scores[i][3];
    }

    for (int i = 1; i < N - 1; i++) 
    {
        bool flag = true;
        for (int j = 0; j < N - i; j++)
        {
            if (average_score[j] > average_score[j + 1])
            {
                int temp = average_score[j];
                average_score[j] = average_score[j + 1];
                average_score[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", average_score[i]);
    }

    exit(0);
}
