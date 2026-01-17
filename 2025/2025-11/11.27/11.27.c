#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define STUDENTS 50
#define COURSES 3
//#define ONLINE_JUDGE
typedef struct
{
    char names_id[20];
    int scores[COURSES];
    int average;
}Stu;

 static inline void swap(int * a,int * b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void get_stus(Stu stus[],int student_count)
{
    int N, i = 0;
    scanf("%d", &N);
    char name[20];
    int N1 = N;
    student_count=N
    while (N1--)
    {
        scanf("%s", name);

        sprintf(stus[i].names_id,"2025%03d:%s",i+1,name);

        for (int j = 0; j < COURSES; j++)
        {
            scanf("%d", &stus[i].scores[j]);
        }
        i++;
    }
}

int * calculate_student_averages(Stu stus[],int student_count) {
    int averages[STUDENTS];

    for (int i = 0; i < student_count; i++) {
        int sum = 0;
        for (int j = 0; j < COURSES; j++) {
            sum += stus[i].scores[j];
        }
        stus[i].average = sum / COURSES;
        averages[i] =  stus[i].average;
    }

    return averages;
}

int find_k(int a[],int L,int R,int k)
{
    int i = L, j = R, x = a[(L + R) / 2];
    while (i <= j)
    {
        while (a[i] < x)
            i++;
        while (a[j] > x)
            j--;
        if (i <= j)
        {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
    }
    if (k > j && k < i)
        return x;
    if (k <= j)
        return find_k(a, L, j, k);
    else if (k >= i)
        return find_k(a, i, R, k);
}

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
    int students_count=0;
    Stu stus[STUDENTS]={};
    get_stus(stus,students_count); //arg bug1

    int * averages = calculate_student_averages(stus, students_count);  //return bug


    for (int i=0;i<students_count ;i++ )
    {
        printf("%d ",averages[i]);
    }
    putchar('\n');

    printf("%d",find_k(averages,0,students_count-1,students_count*6/10));

    exit(0);
}
