#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct NODE 
{
    int value;
    struct NODE *next;
};
typedef struct NODE NODE;
NODE *create()
{
    NODE *head,*cur,*q;
    int n;
    head=malloc(sizeof(NODE));
    cur=head;
    while(1)
    {
        scanf("%d",&n);
        if(n>=0)
        {
          q=malloc(sizeof(NODE));
          q->value=n;
          cur->next=q;
          cur=q;
        }
        else
        {
            q=NULL;
            cur->next=q;
            break;
        }
    }
    return head;
}
NODE* reverse(NODE*head)
{
    NODE *first,*second,*prev;
    prev=head;
    while(prev->next!=NULL&&prev->next->next!=NULL)
    {
      first=prev->next;
      second=first->next;
      prev->next=second;
      first->next=second->next;
      second->next=first;
      prev=first;
    }
    return head;
}
void print(NODE*head)
{
    NODE *cur;
    cur=head->next;
    while(cur!=NULL)
    {
        printf("%d\n",cur->value);
        cur=cur->next;
    }
    return ;
}
int main()
{
    NODE *head=create();
    print(reverse(head));
    return 0;
}