#include<stdio.h>
#include<stdlib.h>
struct node
{
    int x;
    struct node *next;
};
struct node *create()
{
    struct node *head;
    head = (struct node*)malloc(sizeof(struct node));
    head -> next=NULL;
    return head;
}
void add (struct node*head)
{
    struct node *tail = head;
    while (tail->next != NULL) 
    {
        tail = tail->next;
    }

    int num;
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        struct node *p = (struct node*)malloc(sizeof(struct node));
        p->x = num;
        p->next = NULL;

        tail->next = p;  
        tail = p;        
    }
}
void removef(struct node *plist)
{
    struct node *prev;
    prev = plist;
    struct node *curr;
    curr=prev->next;
    while (curr != NULL) 
    {
        if (curr->x < 0) 
        {
            prev->next = curr->next;
            free(curr);               
            curr = prev->next;        
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}
void print(struct node*head)
{
    struct node *p=head->next;
    while(p!=NULL)
    {
        printf("%d ",p->x);
        p = p->next;
    }
    printf("\n");
}
int main()
{
    struct node *plist=create();
    add(plist);
    removef(plist);
    print(plist);
    return 0;
}