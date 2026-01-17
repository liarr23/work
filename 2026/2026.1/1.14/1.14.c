#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
};
typedef struct Node node;
node * createhead()
{
    node* head=(node*)malloc(sizeof(node));
    head->next=NULL;
    return head;
}
void add(node* head)
{
    node *tail;
    node *curr;
    tail=head;
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        if(num==-1)
        {
            break;
        }
        curr=(node*)malloc(sizeof(node));
        curr->val=num;
        curr->next=NULL;
        tail->next=curr;
        tail=curr;
    }
    tail->next=NULL;
}
void print(node* head)
{
    node* p;
    p=head->next;
    while(p!=NULL)
    {
        printf("%d ",p->val);
        p=p->next;
    }
}
node* reverse(node*head)
{
    node *prev=NULL;
    node *curr=head->next;
    while(curr!=NULL)
    {
        node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head->next=prev;
    return head;
}
void dele(node* head,int num)
{
    node* prev=head;
    node* curr=head->next;
    while(curr!=NULL)
    {
        if(curr->val==num)
        {
            prev->next=curr->next;
            free(curr);
            return;
        }
        prev=curr;
        curr=curr->next;
    }
}
int main()
{
    node* head;
    head=createhead();
    add(head);
    head=reverse(head);
    int num;
    scanf("%d",&num);
    dele(head,num);
    print(head);
    return 0;
}