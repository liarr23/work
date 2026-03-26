#ifndef BOOKS_H_INCLUDED
#define BOOKS_H_INCLUDED
typedef struct book
{
    char name[50];
    char isbn[14];
    char borrower[50];//借阅者，未借出为“q”
    char author[50];//作者
    int category;//分类，0-4分别为人文、科学、工科、医疗、综合
    int times;//借阅次数
    int publish_date;//出版日期
    char publisher[50];//出版社
    struct book *next;
}book;
typedef struct history
{
    char username[50];
    char bookname[50];
    char isbn[14];
    int borrow_date;//借阅日期
    int return_date;//剩余天数，逾期为负数
    int if_return;//是否归还，0为未归还，1为已归还
    struct history *next;
}history;
typedef struct user
{
    int usertype;//用户类型
    char username[50];//用户名
    char password[50];//密码
    int borrow_num;//借阅数量
    struct user *next;
}user;
/*==================================================================================*/
//图书信息查询
//单一条件查询
//void find_book_by_name(book *head,char* name);//通过书名查询图书信息
//void find_book_by_author(book *head,char* author);//通过作者查询图书信息
//void find_book_by_category(book *head,int category);//通过分类查询图书信息
//void find_book_by_isbn(book *head,char* isbn);//通过ISBN查询图书信息
//void find_book_by_publisher(book *head,char *publisher);//通过出版社查询图书信息
//复合条件查询

//模糊查询
//void fuzzy_find_book(book *head,int input_method,char *fuzzy_input);//通过模糊匹配查询图书信息
/*==================================================================================*/
//图书排序
//单一条件排序
void sort_book(book **head);//提供多种排序方式---->总接口*************************************************用这个！！！！！！！！！！
void sort_book_by_name(book **headref,int turn);//turn为排序方式，0为升序，1为降序
void sort_book_by_author(book **headref,int turn);
void sort_book_by_category(book **headref,int turn);
void sort_book_by_times(book **headref,int turn);
void sort_book_by_publish_date(book **headref,int turn);
void sort_book_by_publisher(book **headref,int turn);
//复合条件排序
void sort_books_multi_condition(book **headref);
//升序降序排序
/*==================================================================================*/
//图书统计信息
//单一条件统计
void print_datas(book *head,history *hist_head);//打印图书信息//提供多种打印方式---->总接口***************************************用这个！！！！！！！！！！
void print_book_num(book *head);//统计图书总数量
void print_category_num(book *head);//统计各分类图书数量
void print_publisher_num(book *head);//统计各出版社图书数量
void print_num_same_category(book *head,int category);//统计同一分类图书数量
void print_num_same_author(book *head,char *author);//统计同一作者图书数量
void print_num_same_name(book *head,char *name);//统计同一书名图书数量
void print_num_same_publisher(book *head, char *publisher);//统计同一出版社图书数量
void print_history_num(history *head);//统计历史记录总数量
void print_author_num(book *head);//统计作者数量
//复合条件统计
void print_combine(book *head,int author,int category,int publisher);//通过复合条件统计图书信息
//历史记录排序
void sort_history_by_username(history **headref,int turn);//turn为排序方式，0为升序，1为降序
void sort_history_by_borrow_date(history **headref,int turn);
void sort_history_by_return_date(history **headref,int turn);
void sort_history_by_bookname(history **headref,int turn);
void sort_history(history **head);//提供多种排序方式---->总接口************************************************用这个！！！！！！！！！！
//历史记录查询
void find_history_by_username(history *head,const char* username);//通过用户名查询历史记录
void find_history_by_bookname(history *head,const char* bookname);//通过书名查询历史记录
void find_history_by_borrow_date(history *head,int borrow_date);//通过借阅日期查询历史记录
void find_history_by_return_date(history *head,int return_date);//通过归还日期查询历史记录
void find_history_by_isbn(history *head,const char* isbn);//通过ISBN查询历史记录
void find_history_by_period(history *head,int start_date,int end_date);//通过时间段查询历史记录
void find_history_combine(history *head,const char* username,const char* bookname,int borrow_date,int return_date,int start_date,int end_date);//通过复合条件查询历史记录
void find_history(history *head);//提供多种查询方式---->总接口******************************************************************************用这个！！！！！！！！！！
/*==================================================================================*/
//文件读写
book *load_books_txt();
int save_books_txt(book *head);
user *load_users_txt();
int save_users_txt(user *head);
history *load_history_txt();
int save_history_txt(history *head);
void print_book(book *head);//打印图书信息
void print_history(history *head);//打印历史记录信息
void free_books(book *head);
void free_users(user *head);
void free_history(history *head);
#endif // BOOKS_H_INCLUDED
