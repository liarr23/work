#ifndef BOOKS_H_INCLUDED
#define BOOKS_H_INCLUDED
typedef struct book
{
    char name[50];
    char isbn[14];
    char borrower[50];//閿熸枻鎷烽敓鏂ゆ嫹閿熺锝忔嫹鏈敓鏂ゆ嫹閿熸枻鎷烽敓锟�"q"
    char author[50];//閿熸枻鎷烽敓鏂ゆ嫹
    int category;//閿熶粙鏈敓鏂ゆ嫹閿熸枻鎷�
    int times;//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓锟�
    int publish_date;//閿熸枻鎷烽敓鏂ゆ嫹鏃堕敓鏂ゆ嫹
    char publisher[50];//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷�
    struct book *next;
}book;
typedef struct history
{
    char username[50];
    char bookname[50];
    char isbn[14];
    int borrow_date;
    int return_date;
    struct history *next;
}history;
typedef struct user
{
    int usertype;//閿熸枻鎷峰笀1閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹2閿熸枻鎷烽敓鍙拝鎷烽敓鏂ゆ嫹3閿熸枻鎷烽敓鏂ゆ嫹澹敓鏂ゆ嫹4
    char username[50];//閿熺煫浼欐嫹閿熸枻鎷�
    char password[50];//閿熸枻鎷烽敓鏂ゆ嫹
    int borrow_num;//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹
    struct user *next;
}user;
/*==================================================================================*/
//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷锋伅閿熸枻鎷疯
//閿熸枻鎷风‘閿熸枻鎷疯
void find_book_by_name(book *head,char* name);//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷疯
void find_book_by_author(book *head,char* author);//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹璇�
void find_book_by_category(book *head,int category);//閿熸枻鎷烽敓鏂ゆ嫹閿熺獤锟�
void find_book_by_isbn(book *head,char* isbn);//isbn閿熸枻鎷烽敓绐栵拷
void find_book_by_publisher(book *head,char *publisher);//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓绐栵拷
//閿熸枻鎷峰枩閿熺獤锟�

//妯￠敓鏂ゆ嫹閿熸枻鎷疯
void fuzzy_find_book(book *head,int input_method,char *fuzzy_input);//妯￠敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷疯
/*==================================================================================*/
//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷锋伅閿熸枻鎷烽敓鏂ゆ嫹
//閿熸枻鎷蜂竴閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹//turn=1閿熸枻鎷烽敓鏂ゆ嫹turn=0涓洪敓鏂ゆ嫹閿熸枻鎷�
void sort_book(book **head);
void sort_book_by_name(book **headref,int turn);
void sort_book_by_author(book **headref,int turn);
void sort_book_by_category(book **headref,int turn);
void sort_book_by_times(book **headref,int turn);
void sort_book_by_publish_date(book **headref,int turn);
void sort_book_by_publisher(book **headref,int turn);
//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷�
void sort_books_multi_condition(book **headref);
//閿熸枻鎷烽敓鏂ゆ嫹1涓虹‘閿熸枻鎷烽€夐敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹0涓洪敓鏂ゆ嫹閫夐敓鏂ゆ嫹
/*==================================================================================*/
//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷锋伅缁熼敓鏂ゆ嫹
//閿熸枻鎷蜂竴閿熸枻鎷烽敓鏂ゆ嫹缁熼敓鏂ゆ嫹
void print_book_num(book *head);
void print_category_num(book *head);
void print_publisher_num(book *head);
void print_num_same_category(book *head,int category);
void print_num_same_author(book *head,char *author);
void print_num_same_name(book *head,char *name);
void print_num_same_publisher(book *head, char *publisher);
//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷风粺閿熸枻鎷�
void print_combine(book *head,int author,int category,int publisher);//閿熸枻鎷烽敓鏂ゆ嫹1涓洪€夐敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹瑁曢敓鏂ゆ嫹閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓缂寸鈽呮嫹閿熸枻鎷烽敓锟�
//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷峰彶閿熸枻鎷烽敓鏂ゆ嫹
void sort_history_by_username(history **headref,int turn);
void sort_history_by_borrow_date(history **headref,int turn);
void sort_history_by_return_date(history **headref,int turn);
void sort_history_by_bookname(history **headref,int turn);
void sort_history(history **head);
//閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷峰彶閿熸枻鎷疯
void find_history_by_username(history *head,const char* username);
void find_history_by_bookname(history *head,const char* bookname);
void find_history_by_borrow_date(history *head,int borrow_date);
void find_history_by_return_date(history *head,int return_date);
void find_history_by_isbn(history *head,const char* isbn);
void find_history_by_period(history *head,int start_date,int end_date);
void find_history_combine(history *head,const char* username,const char* bookname,int borrow_date,int return_date,int start_date,int end_date);
void find_history(history *head);
/*==================================================================================*/
#endif // BOOKS_H_INCLUDED
