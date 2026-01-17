#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct NOde *next;
};
typedef struct Node node;
node *createhead()
{
    node *head;
    head = (node*)malloc(sizeof(node));
    head->next=NULL;
    return head;
}
void insert(node *head)
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
        tail->next=curr;
        tail=curr;
    }
    tail->next=NULL;
}
void printlist(node *head)
{
    node *curr;
    curr=head->next;
    while(curr!=NULL)
    {
        printf("%d ",curr->val);
        curr=curr->next;
    }
}
int main()
{
    node *head=createhead();
    insert(head);
    printlist(head);
    return 0;
}