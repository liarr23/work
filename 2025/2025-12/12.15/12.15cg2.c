#include<stdio.h>//头文件
#include<stdlib.h>
struct Node {//定义节点结构体
    int val;
    struct Node *next;
};
typedef struct Node node; //简化结构体变量名称
void input(node** head)//头插法 
{ // 传递 head 的地址（二级指针）
    int num;
    while (scanf("%d", &num) == 1) { 
        if (num == -1) {
            break;
        }
        else 
        {
            node* curr = (node*)malloc(sizeof(node));
            if (curr == NULL) 
            {
                printf("内存分配失败\n");
                return;
            }
            curr->val = num;
            curr->next = *head; 
            *head = curr; 
        }
    }
}
void delete(node*head)//定义元素查找删除函数
{
    node*prev;
    node*curr;
    prev=head;
    curr=head->next;
    int num;
    scanf("%d",&num);
    if(prev->val==num)
    {
        prev->val=-1;
    }
    while(curr!=NULL)
    {
        if(curr->val==num)
        {
            prev->next=curr->next;
            free(curr);
            curr=prev->next;
        }
        else
        {
            prev=curr;
            curr=curr->next;
        }
    }
}
void print(node*head)//定义链表输出函数
{
    node*curr;
    curr=head;
    while(curr!=NULL)
    {
        if(curr->val!=-1)
        {
        printf("%d ",curr->val);
        }
        curr=curr->next;
    }
}
int main()//主函数
{
    node*head=NULL;
    input(&head);
    delete(head);
    print(head);
    return 0;
}