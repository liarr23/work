#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED
typedef struct book
{
    char name[50];
    char isbn[30];
    char borrower[20];
    int deadline;
    int time;
    int booktype;
    struct book *next;
}book;
typedef struct user
{
    int usertype;//教师1，本科生2，研究生3，博士生4
    char username[20];
    char password[20];
    struct user *next;
};
int book_times[20];
int user_times[20];

#endif // STRUCTURE_H_INCLUDED
