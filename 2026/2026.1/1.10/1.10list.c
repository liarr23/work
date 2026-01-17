#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node* next;
};
typedef struct node Node;
Node * createhead()
{
    Node* head;
    head=(Node*)malloc(sizeof(Node));
    head->next=NULL;
    return head;
}
void input(Node *head,int num)
{
    Node* tail;
    Node* curr;
    tail=head;
    while(num--)
    {
        int value;
        scanf("%d",&value);
        curr=(Node*)malloc(sizeof(Node));
        curr->val=value;
        tail->next=curr;
        tail=curr;
    }
    tail->next=NULL;
}
void printlist(Node *head)
{
    Node* curr;
    curr=head->next;
    while(curr!=NULL)
    {
        printf("%d ",curr->val);
        curr=curr->next;
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    Node* head=createhead();
    input(head,num);
    printlist(head);
    return 0;
}