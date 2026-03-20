#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"books.h"
/*==================================================================================*/
//图锟斤拷锟斤拷锟斤拷锟斤拷
void change_book_category(book *head,char* name,int target);//锟斤拷锟斤拷图锟斤拷锟斤拷锟斤拷
void change_book_deadline(int *list,int category,int target);//锟斤拷锟侥斤拷锟斤拷时锟斤拷
/*==================================================================================*/
//锟斤拷锟竭凤拷锟斤拷锟斤拷锟?
void change_user_category(user *head,const char* name,int target);//锟斤拷锟侥讹拷锟斤拷锟斤拷锟斤拷
void change_user_max_borrow(int *list,int category,int target);//锟斤拷锟斤拷锟斤拷锟斤拷锟侥憋拷锟斤拷
/*==================================================================================*/
//锟斤拷锟侥硷拷录锟斤拷锟斤拷
void add_book(book **headref);
void delete_book_by_name(book **headref,const char* name);
void delete_book_by_author(book **headref,const char* author);
void delete_book_by_category(book **headref,int category);
void delete_book_by_isbn(book **headref,const char* isbn);
void delete_book_by_publisher(book **headref,const char* publisher);
void delete_book(book **headref);
#endif // ADMIN_H_INCLUDED
