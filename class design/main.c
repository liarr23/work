#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "books.h"
#include "admin.h"
int book_times[20]={20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20};
int user_borrow_num[20]={20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20};
int main()
{
    book *book_head = load_books_txt();
    user *user_head = load_users_txt();
    history *history_head = load_history_txt();
    sort_book(&book_head);
    sort_history(&history_head);
    find_history(&history_head);
    print_datas(book_head,history_head);
    change_book_data(book_head,book_times);
    others(book_head,history_head);
    add_book(&book_head);
    delete_book(&book_head);
    print_book(book_head);
    print_history(history_head);
    save_books_txt(book_head);
}
