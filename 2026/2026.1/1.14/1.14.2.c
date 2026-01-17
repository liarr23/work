#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int val;
    struct Node* next;
};
typedef struct Node node;
void insert_head(node** head)
{
    int num;
    while(scanf("%d", &num))
    {
        if(num==-1)
        {
            break;
        }
    node* new_node = (node*)malloc(sizeof(node));
    new_node->val = num;
    new_node->next = *head;
    *head = new_node;
    }
}
void print_list(node* head)
{
    node* current = head;
    while(current != NULL)
    {
        printf("%d ", current->val);
        current = current->next;
    }
}
int main()
{
    node* head = NULL;
    insert_head(&head);
    print_list(head);
    return 0;
}