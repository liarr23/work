#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"books.h"
/*==================================================================================*/
//更改图书信息
void change_book_data(book *head,history *hist_head,int *list);//更改图书信息，提供多种更改方式---->总接口*************************************************用这个！！！！！！！！！！
void change_book_name(book *head,history *hist_head,char* isbn,const char* new_name);//更改图书名称
void change_book_isbn(book *head,history *hist_head,char* isbn,const char* new_isbn);//更改图书ISBN
void change_book_author(book *head,char* isbn,const char* new_author);//更改图书作者
void change_book_category(book *head,char* isbn,int new_category);//更改图书分类
void change_book_deadline(int *list,int category,int new_deadline);//更改图书借阅期限
void change_book_publisher(book *head,char* isbn,const char* new_publisher);//更改图书出版社
/*==================================================================================*/
//更改用户信息
void change_user_category(user *head,const char* name,int new_category);//更改用户分类
void change_user_max_borrow(int *list,int category,int new_max_borrow);//更改用户最大借阅数量
/*==================================================================================*/
//图书排序
void add_book(book **headref);//增加图书
void delete_book_by_name(book **headref,const char* name);
void delete_book_by_author(book **headref,const char* author);
void delete_book_by_category(book **headref,int category);
void delete_book_by_isbn(book **headref,const char* isbn);
void delete_book_by_publisher(book **headref,const char* publisher);
void delete_book(book **headref);//删除图书，提供多种删除方式---->总接口
//额外功能
//逾期罚款
void calculate_fine(history *head,const char* username);//计算用户逾期罚款金额
void most_borrowed_books(book *head);//统计最受欢迎图书
void least_borrowed_books(book *head);//统计最冷门图书
void books_overdue(history *head);//统计逾期图书
void others(book *head,history *hist_head);//其他功能总接口,提供多种功能选择**************************************************用这个！！！！！！！！！！
#endif // ADMIN_H_INCLUDED
