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
    char temp[30] = "20250";
    char names_id[20][30]; 
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
            temp[strLength] = (char)(48 + (i + 1) / 10);
            temp[strLength + 1] = (char)(48 + (i + 1) % 10);
            temp[strLength + 2] = ':';
            temp[strLength + 3] = '\0';
            strcat(temp, name);
        }

        strcpy(names_id[i], temp);
        temp[5] = '\0'; 

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
    max_score = scores[0][0];
    min_score = scores[0][0];
    max_i = 0;
    min_i = 0;
    for (int i = 0; i < N; i++)
    {
        sum=0;
        for (int j = 0; j < 3; j++)
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

    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = 0; j < N - i -1; j++)
        {
            if (average_score[j] > average_score[j + 1])
            {
                int temp = average_score[j];
                average_score[j] = average_score[j + 1];
                average_score[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", average_score[i]);
    }

    return 0;
}
