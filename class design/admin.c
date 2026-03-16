#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"admin.h"
#include"books.h"
//定义比较函数
//=================================================================================
//按照书名排序***********************************************************
int compare_books_asc1(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按书名 strcmp 比较
    return strcmp(bookA->name, bookB->name);
}
int compare_books_desc1(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按书名 strcmp 比较
    return strcmp(bookB->name, bookA->name);
}
//按照作者排序***********************************************************
int compare_books_asc2(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按作者 strcmp 比较
    return strcmp(bookA->author, bookB->author);
}
int compare_books_desc2(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按作者 strcmp 比较
    return strcmp(bookB->author, bookA->author);
}
//按照图书种类排序******************************************************
int compare_books_asc3(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按书种类 比较
    return bookA->category-bookB->category;
}
int compare_books_desc3(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按书种类 strcmp 比较
    return bookB->category-bookA->category;
}
//按照借阅次数排序******************************************************
int compare_books_asc4(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按借书次数 比较
    return bookA->times-bookB->times;
}
int compare_books_desc4(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按借书次数 比较
    return bookB->times-bookA->times;
}
//按出版日期排序********************************************************
int compare_books_asc5(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按出版日期 比较
    return bookA->publish_date - bookB->publish_date;
}
int compare_books_desc5(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按出版日期 比较
    return bookB->publish_date - bookA->publish_date;
}
//按出版社排序**********************************************************
int compare_books_asc6(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按出版社 strcmp 比较
    return strcmp(bookA->publisher, bookB->publisher);
}
int compare_books_desc6(const void *a, const void *b) 
{
    // 取出 book* 指针
    book *bookA = *(book **)a;
    book *bookB = *(book **)b;
    
    // 按出版社 strcmp 比较
    return strcmp(bookB->publisher, bookA->publisher);
}
int compare_history_username(const void *a, const void *b) 
{
    history *histA = *(history **)a;
    history *histB = *(history **)b;
    
    return strcmp(histA->username, histB->username);
}
int compare_history_borrow_date(const void *a, const void *b) 
{
    history *histA = *(history **)a;
    history *histB = *(history **)b;
    
    return histA->borrow_date - histB->borrow_date;
}
int compare_history_return_date(const void *a, const void *b) 
{
    history *histA = *(history **)a;
    history *histB = *(history **)b;
    
    return histA->return_date - histB->return_date;
}
int compare_history_bookname(const void *a, const void *b) 
{
    history *histA = *(history **)a;
    history *histB = *(history **)b;
    
    return strcmp(histA->bookname, histB->bookname);
}
int compare_history_username_desc(const void *a, const void *b) 
{
    history *histA = *(history **)a;
    history *histB = *(history **)b;
    
    return strcmp(histB->username, histA->username);
}
int compare_history_borrow_date_desc(const void *a, const void *b) 
{
    history *histA = *(history **)a;
    history *histB = *(history **)b;
    
    return histB->borrow_date - histA->borrow_date;
}
int compare_history_return_date_desc(const void *a, const void *b) 
{
    history *histA = *(history **)a;
    history *histB = *(history **)b;
    
    return histB->return_date - histA->return_date;
}
int compare_history_bookname_desc(const void *a, const void *b) 
{
    history *histA = *(history **)a;
    history *histB = *(history **)b;
    
    return strcmp(histB->bookname, histA->bookname);
}
//=================================================================================
    //修改类别
    //==============================================================================
    void change_user_category(user *head,const char* name,int target)//修改用户分类
    {
        user *curr=head;
        while (curr != NULL) 
        {
        if (strcmp(curr->username, name) == 0) 
        {
            curr->usertype = target;
            printf("修改成功\n");
            return;
        }
        curr = curr->next;
        }
    }
    void change_book_category(book *head,char* name,int target)
    {
        book *curr=head;
        while (curr != NULL) 
        {
        if (strcmp(curr->name, name) == 0) 
        {
            curr->category = target;
            printf("修改成功\n");
            return;
        }
        curr = curr->next;
        }
    }
    void change_book_deadline(int *list,int category,int target)
    {
        list[category]=target;
    }
    void change_user_max_borrow(int *list,int category,int target)
    {
        list[category]=target;
    }
//增加图书记录
    void add_book(book **headref)
    {
        book *new_book = (book *)malloc(sizeof(book));
        if (new_book == NULL) 
        {
            fprintf(stderr, "内存分配失败\n");
            return;
        }
        printf("请输入书名：");
        scanf("%s", new_book->name);
        printf("请输入ISBN：");
        scanf("%s", new_book->isbn);
        printf("请输入作者：");
        scanf("%s", new_book->author);
        printf("请输入图书种类（整数）：");
        scanf("%d", &new_book->category);
        printf("请输入出版日期（整数）：");
        scanf("%d", &new_book->publish_date);
        printf("请输入出版社：");
        scanf("%s", new_book->publisher);
        new_book->borrower[0] = '\0'; // 初始化为未借出
        new_book->times = 0; // 初始化借出次数
        new_book->next = *headref; // 新节点指向当前头节点
        *headref = new_book; // 更新头指针
    }
    //图书排序
    //==============================================================================
    //单一条件——————————————————————————————————————————————————————————————————————————————————————
    //按书名排序************************************************************
    void sort_book_by_name(book **headref,int turn)
    {
        if (headref == NULL || *headref == NULL) 
        {
        return; // 空链表直接返回
        }

    // 1. 统计链表长度
    int count = 0;
    book *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    book **arr = (book **)malloc(count * sizeof(book *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(book *), compare_books_asc1);
    } else {
        // 降序
        qsort(arr, count, sizeof(book *), compare_books_desc1);
    }
     // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
    }
    //按作者排序************************************************************
    void sort_book_by_author(book **headref,int turn)
    {
        if (headref == NULL || *headref == NULL) 
        {
        return; // 空链表直接返回
        }

    // 1. 统计链表长度
    int count = 0;
    book *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    // 数组里存的是 book* (节点的地址)
    book **arr = (book **)malloc(count * sizeof(book *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(book *), compare_books_asc2);
    } else {
        // 降序
        qsort(arr, count, sizeof(book *), compare_books_desc2);
    }
      // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
    }
    //按种类排序****************************************************************
    void sort_book_by_category(book **headref,int turn)
    {
        if (headref == NULL || *headref == NULL) 
        {
        return; // 空链表直接返回
        }

    // 1. 统计链表长度
    int count = 0;
    book *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    // 数组里存的是 book* (节点的地址)
    book **arr = (book **)malloc(count * sizeof(book *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(book *), compare_books_asc3);
    } else {
        // 降序
        qsort(arr, count, sizeof(book *), compare_books_desc3);
    }
      // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
    }
    //按借阅次数排列************************************************************
    void sort_book_by_times(book **headref,int turn)
    {
        if (headref == NULL || *headref == NULL) 
        {
        return; // 空链表直接返回
        }

    // 1. 统计链表长度
    int count = 0;
    book *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    // 数组里存的是 book* (节点的地址)
    book **arr = (book **)malloc(count * sizeof(book *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(book *), compare_books_asc4);
    } else {
        // 降序
        qsort(arr, count, sizeof(book *), compare_books_desc4);
    }
      // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
    }
    //按出版日期排列************************************************************
    void sort_book_by_publish_date(book **headref,int turn)
    {
        if (headref == NULL || *headref == NULL) 
        {
        return; // 空链表直接返回
        }

    // 1. 统计链表长度
    int count = 0;
    book *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    // 数组里存的是 book* (节点的地址)
    book **arr = (book **)malloc(count * sizeof(book *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(book *), compare_books_asc5);
    } else {
        // 降序
        qsort(arr, count, sizeof(book *), compare_books_desc5);
    }
      // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
    }
    //按出版社排序*****************************************************************
    void sort_book_by_publisher(book **headref,int turn)
    {
        if (headref == NULL || *headref == NULL) 
        {
        return; // 空链表直接返回
        }

    // 1. 统计链表长度
    int count = 0;
    book *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    // 数组里存的是 book* (节点的地址)
    book **arr = (book **)malloc(count * sizeof(book *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(book *), compare_books_asc6);
    } else {
        // 降序
        qsort(arr, count, sizeof(book *), compare_books_desc6);
    }
      // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
    }
        //多条件排序——————————————————————————————————————————————————————————————————————————
    
    /* ========================================================================== */
    /* 新增：多条件比较函数                                                       */
    /* ========================================================================== */

    // 模式 1: 先按【分类】升序，若相同则按【书名】升序
    int compare_multi_cat_name(const void *a, const void *b) {
        book *bookA = *(book **)a;
        book *bookB = *(book **)b;

        // 第一优先级：分类 (category)
        if (bookA->category != bookB->category) {
            return bookA->category - bookB->category; // 升序
        }
        // 第二优先级：书名 (name) - 当分类相同时生效
        return strcmp(bookA->name, bookB->name); // 升序
    }

    // 模式 2: 先按【借阅次数】降序，若相同则按【出版日期】升序 (新书优先)
    int compare_multi_times_date(const void *a, const void *b) {
        book *bookA = *(book **)a;
        book *bookB = *(book **)b;

        // 第一优先级：借阅次数 (times) - 降序 (热门的排前面)
        if (bookA->times != bookB->times) {
            return bookB->times - bookA->times; 
        }
        // 第二优先级：出版日期 (publish_date) - 升序 (旧书排前面，若要新书优先请交换 A/B)
        return bookA->publish_date - bookB->publish_date;
    }

    // 模式 3: 先按【作者】升序，若相同则按【出版社】升序
    int compare_multi_author_pub(const void *a, const void *b) {
        book *bookA = *(book **)a;
        book *bookB = *(book **)b;

        // 第一优先级：作者 (author)
        int authorCmp = strcmp(bookA->author, bookB->author);
        if (authorCmp != 0) {
            return authorCmp;
        }
        // 第二优先级：出版社 (publisher)
        return strcmp(bookA->publisher, bookB->publisher);
    }

    /* ========================================================================== */
    /* 新增：统一的多条件排序主函数                                               */
    /* ========================================================================== */
    void sort_books_multi_condition(book **headref) {
        if (headref == NULL || *headref == NULL) {
            printf(" 图书库为空，无法进行多条件排序。\n");
            return;
        }

        // 1. 统计链表长度
        int count = 0;
        book *current = *headref;
        while (current != NULL) {
            count++;
            current = current->next;
        }

        // 2. 动态分配指针数组
        book **arr = (book **)malloc(count * sizeof(book *));
        if (arr == NULL) {
            fprintf(stderr, " 内存分配失败\n");
            return;
        }

        // 3. 将链表节点地址填入数组
        current = *headref;
        for (int i = 0; i < count; i++) {
            arr[i] = current;
            current = current->next;
        }

        // 4. 用户选择排序模式
        int mode;
        printf("\n=== 多条件排序选项 ===\n");
        printf("1. [热门分类] 先按分类升序 -> 再按书名升序\n");
        printf("2. [热门推荐] 先按借阅次数降序 -> 再按出版日期升序\n");
        printf("3. [作者合集] 先按作者升序 -> 再按出版社升序\n");
        printf("请输入选项 (1-3): ");
        
        // 防止输入错误导致死循环
        if (scanf("%d", &mode) != 1) {
            printf("输入无效，取消排序。\n");
            // 清除缓冲区
            while(getchar() != '\n'); 
            free(arr);
            return;
        }

        // 5. 执行 qsort
        switch (mode) {
            case 1:
                qsort(arr, count, sizeof(book *), compare_multi_cat_name);
                printf(" 已按 [分类 -> 书名] 排序完成。\n");
                break;
            case 2:
                qsort(arr, count, sizeof(book *), compare_multi_times_date);
                printf(" 已按 [借阅次数(高到低) -> 出版日期] 排序完成。\n");
                break;
            case 3:
                qsort(arr, count, sizeof(book *), compare_multi_author_pub);
                printf(" 已按 [作者 -> 出版社] 排序完成。\n");
                break;
            default:
                printf(" 无效选项，默认采用模式 1 ([分类 -> 书名])。\n");
                qsort(arr, count, sizeof(book *), compare_multi_cat_name);
                break;
        }

        // 6. 根据排序后的数组重建链表
        for (int i = 0; i < count - 1; i++) {
            arr[i]->next = arr[i + 1];
        }
        arr[count - 1]->next = NULL; // 尾节点指向 NULL

        // 7. 更新头指针
        *headref = arr[0];

        // 8. 释放辅助数组
        free(arr);
        
        printf(" 排序操作结束！请使用显示功能查看结果。\n");
    }
    //排序封装——————————————————————————————————————————————————————————————————————————————————————————————————————————————
    void sort_book(book **head)
    {
        int mode;
        printf("===排序方式===\n");
        printf("0.单一条件排序\n");
        printf("1.多条件排序\n");
        printf("请输入:\n");
        if (scanf("%d", &mode) != 1) 
        {
            printf("输入无效，取消排序\n");
            while(getchar() != '\n');
            return;
        }
        if(mode==0)
        {
            printf("===单一排序类型===\n");
            printf("1.按书名顺序排序\n");
            printf("2.按作者顺序排序\n");
            printf("3.按书类型顺序排序\n");
            printf("4.按被借阅次数顺序排序\n");
            printf("5.按出版时间顺序排序\n");
            printf("6.按出版社顺序\n");
            printf("请输入排序顺序:\n");
            int mode1;
            scanf("%d",&mode1);
            if(mode1<1||mode1>6)
            {
                printf("输入无效，取消排序\n");
                while(getchar() != '\n');
                return;
            }
            int turn;
            printf("===排序升降序===\n");
            printf("1.升序\n");
            printf("0.降序\n");
            printf("请输入:\n");
            scanf("%d",&turn);
            if(turn!=0&&turn!=1)
            {
                printf("输入无效，取消排序\n");
                while(getchar() != '\n');
                return;
            }
            if(mode1==1)
            {
                sort_book_by_name(head,turn);
            }
            if(mode1==2)
            {
                sort_book_by_author(head,turn);
            }
            if(mode1==3)
            {
                sort_book_by_category(head,turn);
            }
            if(mode1==4)
            {
                sort_book_by_times(head,turn);
            }
            if(mode1==5)
            {
                sort_book_by_publish_date(head,turn);
            }
            if(mode1==6)
            {
                sort_book_by_publisher(head,turn);
            }
            printf(" 排序操作结束！请使用显示功能查看结果\n");
        }
        if(mode==1)
        {
            sort_books_multi_condition(head);
        }
    }
//历史记录排序=====================================================================================================================================================
void sort_history_by_username(history **headref,int turn)
{
    if (headref == NULL || *headref == NULL) 
    {
        return; // 空链表直接返回
    }

    // 1. 统计链表长度
    int count = 0;
    history *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    history **arr = (history **)malloc(count * sizeof(history *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(history *), compare_history_username);
    } else {
        // 降序
        qsort(arr, count, sizeof(history *), compare_history_username_desc);
    }
     // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
}
//按借阅日期排序***********************************************************************************
void sort_history_by_borrow_date(history **headref,int turn)
{
    if (headref == NULL || *headref == NULL) 
    {
        return; // 空链表直接返回
    }

    // 1. 统计链表长度
    int count = 0;
    history *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    history **arr = (history **)malloc(count * sizeof(history *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(history *), compare_history_borrow_date);
    } else {
        // 降序
        qsort(arr, count, sizeof(history *), compare_history_borrow_date_desc);
    }
     // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
}
//按归还日期排序***********************************************************************************
void sort_history_by_return_date(history **headref,int turn)
{
    if (headref == NULL || *headref == NULL) 
    {
        return; // 空链表直接返回
    }

    // 1. 统计链表长度
    int count = 0;
    history *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    history **arr = (history **)malloc(count * sizeof(history *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(history *), compare_history_return_date);
    } else {
        // 降序
        qsort(arr, count, sizeof(history *), compare_history_return_date_desc);
    }
     // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
}
//按书名排序***********************************************************************************
void sort_history_by_bookname(history **headref,int turn)
{
    if (headref == NULL || *headref == NULL) 
    {
        return; // 空链表直接返回
    }

    // 1. 统计链表长度
    int count = 0;
    history *current = *headref;
    while (current != NULL) 
    {
        count++;
        current = current->next;
    }

    // 2. 动态分配指针数组
    history **arr = (history **)malloc(count * sizeof(history *));
    if (arr == NULL) 
    {
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 3. 将链表节点地址填入数组
    current = *headref;
    for (int i = 0; i < count; i++) 
    {
        arr[i] = current;
        current = current->next;
    }

    // 4. 调用 qsort 排序
    if (turn == 1) {
        // 升序
        qsort(arr, count, sizeof(history *), compare_history_bookname);
    } else {
        // 降序
        qsort(arr, count, sizeof(history *), compare_history_bookname_desc);
    }
     // 5. 根据排序后的数组重建链表
    for (int i = 0; i < count - 1; i++) 
    {
        arr[i]->next = arr[i + 1]; // 当前节点指向下一个节点
    }
    arr[count - 1]->next = NULL; // 最后一个节点指向 NULL

    // 6. 更新头指针
    *headref = arr[0];

    // 7. 释放辅助数组
    free(arr);
}
//历史记录排序封装***********************************************************************************
void sort_history(history **head)
{
    int mode;
    printf("===排序方式===\n");
    printf("1.按用户名排序\n");
    printf("2.按借阅日期排序\n");
    printf("3.按归还日期排序\n");
    printf("4.按书名排序\n");
    printf("请输入:\n");
    if (scanf("%d", &mode) != 1) 
    {
        printf("输入无效，取消排序\n");
        while(getchar() != '\n');
        return;
    }
    if(mode<1||mode>4)
    {
        printf("输入无效，取消排序\n");
        while(getchar() != '\n');
        return;
    }
    int turn;
    printf("===排序升降序===\n");
    printf("1.升序\n");
    printf("0.降序\n");
    printf("请输入:\n");
    scanf("%d",&turn);
    if(turn!=0&&turn!=1)
    {
        printf("输入无效，取消排序\n");
        while(getchar() != '\n');
        return;
    }
    if(mode==1)
    {
        sort_history_by_username(head,turn);
    }
    if(mode==2)
    {
        sort_history_by_borrow_date(head,turn);
    }
    if(mode==3)
    {
        sort_history_by_return_date(head,turn);
    }
    if(mode==4)
    {
        sort_history_by_bookname(head,turn);
    }
}
//历史记录查询=====================================================================================================================================================
void find_history_by_username(history *head,const char* name)
{
    history *curr=head;
    int found=0;
    while (curr != NULL) 
    {
        if (strcmp(curr->username, name) == 0) 
        {
            printf("用户名: %s | 书名: %s | 借阅日期: %d | 归还日期: %d\n", 
                   curr->username, curr->bookname, curr->borrow_date, curr->return_date);
            found = 1;
        }
        curr = curr->next;
    }
    if (!found) {
        printf("未找到用户 '%s' 的借阅记录。\n", name);
    }
}
//按书名查询***********************************************************************************
void find_history_by_bookname(history *head,const char* name)
{
    history *curr=head;
    int found=0;
    while (curr != NULL) 
    {
        if (strcmp(curr->bookname, name) == 0) 
        {
            printf("用户名: %s | 书名: %s | 借阅日期: %d | 归还日期: %d\n", 
                   curr->username, curr->bookname, curr->borrow_date, curr->return_date);
            found = 1;
        }
        curr = curr->next;
    }
    if (!found) {
        printf("未找到书名 '%s' 的借阅记录。\n", name);
    }
}
//按借阅日期查询***********************************************************************************
void find_history_by_borrow_date(history *head,int date)
{
    history *curr=head;
    int found=0;
    while (curr != NULL) 
    {
        if (curr->borrow_date == date) 
        {
            printf("用户名: %s | 书名: %s | 借阅日期: %d | 归还日期: %d\n", 
                   curr->username, curr->bookname, curr->borrow_date, curr->return_date);
            found = 1;
        }
        curr = curr->next;
    }
    if (!found) {
        printf("未找到借阅日期为 '%d' 的借阅记录。\n", date);
    }
}
//按归还日期查询***********************************************************************************
void find_history_by_return_date(history *head,int date)
{
    history *curr=head;
    int found=0;
    while (curr != NULL) 
    {
        if (curr->return_date == date) 
        {
            printf("用户名: %s | 书名: %s | 借阅日期: %d | 归还日期: %d\n", 
                   curr->username, curr->bookname, curr->borrow_date, curr->return_date);
            found = 1;
        }
        curr = curr->next;
    }
    if (!found) {
        printf("未找到归还日期为 '%d' 的借阅记录。\n", date);
    }
}
//按借阅日期区间查询***********************************************************************************
void find_history_by_period(history *head,int start_date,int end_date)
{
    history *curr=head;
    int found=0;
    while (curr != NULL) 
    {
        if (curr->borrow_date >= start_date && curr->borrow_date <= end_date) 
        {
            printf("用户名: %s | 书名: %s | 借阅日期: %d | 归还日期: %d\n", 
                   curr->username, curr->bookname, curr->borrow_date, curr->return_date);
            found = 1;
        }
        curr = curr->next;
    }
    if (!found) {
        printf("未找到借阅日期在 '%d' 到 '%d' 之间的借阅记录。\n", start_date, end_date);
    }
}
//组合查询***********************************************************************************
void find_history_combine(history *head,const char* username,const char* bookname,int borrow_date,int return_date,int start_date,int end_date)
{
    history *curr=head;
    int found=0;
    while (curr != NULL) 
    {
        if ((username == NULL || strcmp(curr->username, username) == 0) &&
            (bookname == NULL || strcmp(curr->bookname, bookname) == 0) &&
            (borrow_date == -1 || curr->borrow_date == borrow_date) &&
            (return_date == -1 || curr->return_date == return_date) &&
            (start_date == -1 || end_date == -1 || (curr->borrow_date >= start_date && curr->borrow_date <= end_date))) 
        {
            printf("用户名: %s | 书名: %s | 借阅日期: %d | 归还日期: %d\n", 
                   curr->username, curr->bookname, curr->borrow_date, curr->return_date);
            found = 1;
        }
        curr = curr->next;
    }
    if (!found) {
        printf("未找到符合条件的借阅记录。\n");
    }
}
//历史记录查询封装***********************************************************************************
void find_history(history *head)
{
    int mode;
    printf("===查询方式===\n");
    printf("1.按用户名查询\n");
    printf("2.按书名查询\n");
    printf("3.按借阅日期查询\n");
    printf("4.按归还日期查询\n");
    printf("5.按借阅日期区间查询\n");
    printf("6.组合查询\n");
    printf("请输入:\n");
    if (scanf("%d", &mode) != 1) 
    {
        printf("输入无效，取消查询\n");
        while(getchar() != '\n');
        return;
    }
    if(mode<1||mode>6)
    {
        printf("输入无效，取消查询\n");
        while(getchar() != '\n');
        return;
    }
    if(mode==1)
    {
        char username[50];
        printf("请输入用户名:\n");
        scanf("%49s", username);
        find_history_by_username(head,username);
    }
    if(mode==2)
    {
        char bookname[50];
        printf("请输入书名:\n");
        scanf("%49s", bookname);
        find_history_by_bookname(head,bookname);
    }
    if(mode==3)
    {
        int borrow_date;
        printf("请输入借阅日期(整数):\n");
        scanf("%d", &borrow_date);
        find_history_by_borrow_date(head,borrow_date);
    }
    if(mode==4)
    {
        int return_date;
        printf("请输入归还日期(整数):\n");
        scanf("%d", &return_date);
        find_history_by_return_date(head,return_date);
    }
    if(mode==5)
    {
        int start_date,end_date;
        printf("请输入借阅日期区间的开始日期(整数):\n");
        scanf("%d", &start_date);
        printf("请输入借阅日期区间的结束日期(整数):\n");
        scanf("%d", &end_date);
        find_history_by_period(head,start_date,end_date);
    }
    if(mode==6)
    {
        char username[50],bookname[50];
        int borrow_date,return_date,start_date,end_date;
        printf("请输入用户名(或输入-1跳过):\n");
        scanf("%49s", username);
        if(strcmp(username,"-1")==0)
        {
            strcpy(username,"");
        }
        printf("请输入书名(或输入-1跳过):\n");
        scanf("%49s", bookname);
        if(strcmp(bookname,"-1")==0)
        {
            strcpy(bookname,"");
        }
        printf("请输入借阅日期(整数，或输入-1跳过):\n");
        scanf("%d", &borrow_date);
        if(borrow_date==-1)
        {
            borrow_date=-1;
        }
        printf("请输入归还日期(整数，或输入-1跳过):\n");
        scanf("%d", &return_date);
        if(return_date==-1)
        {
            return_date=-1;
        }
        printf("请输入借阅日期区间的开始日期(整数，或输入-1跳过):\n");
        scanf("%d", &start_date);
        if(start_date==-1)
        {
            start_date=-1;
        }
        printf("请输入借阅日期区间的结束日期(整数，或输入-1跳过):\n");
        scanf("%d", &end_date);
        if(end_date==-1)
        {
            end_date=-1;
        }
        find_history_combine(head,username,bookname,borrow_date,return_date,start_date,end_date);
    }
}
