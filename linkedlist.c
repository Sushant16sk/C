#include<stdio.h>
#include<stdlib.h>

 struct node
    {
        char info;
        struct node *next;
    };

void main()
{
    struct node* head;
    struct node* first ;
    struct node* second;
    struct node* third ;
    struct node* ptr;
    
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->next = first;

    first->info = 10;
    first->next = second;
    
    second->info = 20;
    second->next = third;

    third->info = 30;
    third->next = NULL;

    ptr = head;
    printf("the linked list is: \n");
    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
        printf("  %d", ptr->info);
       
    }
    

}
