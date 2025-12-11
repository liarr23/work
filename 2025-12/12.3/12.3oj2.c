#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node * next;
};
typedef struct node Node;
Node *create_head()
{
    Node *head ;
    head=(Node*)malloc(sizeof(Node*));
    head->next=NULL;
    return head;
}
void add_elements(Node*head,int num)
{
    int n;
    Node *q;
    q=head;
    while(num--)
    {
            scanf("%d",&n);
            Node*p;
            p=(Node*)malloc(sizeof(Node*));
            p->val=n;
            p->next=NULL;
            q->next=p;
            q=p;
    }
}
void remove_same(Node*head)
{
    Node *prev;
    Node *cur;
    prev = head;
    cur = head->next;
    while(cur!=NULL)
    {
        if(cur->val==prev->val)
        {
            prev->next=cur->next;
            free(cur);
            cur=prev->next;
        }
        else
        {
            prev=cur;
            cur=cur->next;
        }
    }
}
void present_list(Node *head)
{
    Node *q;
    q=head->next;
    while(q!=NULL)
    {
        printf("%d ",q->val);
        q=q->next;
    }
}
int main()
{
    int num;
    while(scanf("%d",&num)==1)
    {
        if(num!=0)
        {
            Node *head=create_head();
            add_elements(head,num);
            present_list(head);
            printf("\n");
            remove_same(head);
            present_list(head);
            printf("\n");
        }
        else
        {
            printf("list is empty\n");
        }
    }
    return 0;
}