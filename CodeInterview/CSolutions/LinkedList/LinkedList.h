#include <stdio.h>
#include<stdlib.h>

#include "../ArrayAndString/OneEditAway.h"

void LinkedListTest();

typedef struct node
{
    int data;
    struct node* next;
} node;

void
ListPrepend(struct node** head, int val)
{
    node* new_node;
    node* new_node_2;
    
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node_2 = new struct node;
    
    new_node->data = val;
    new_node->next = *head;
    *head = new_node;
}

void ListPush(struct node** head, int val)
{
    node* new_node;
    new_node = (struct node*)malloc(sizeof(struct  node));
    new_node -> data = val;
    new_node -> next = NULL;

    if(*head = NULL)
    {
        *head = new_node;
    }
    else
    {
        struct node *lastNode = *head;

        while (lastNode->next != nullptr)
        {
            lastNode = lastNode->next;
        }

        lastNode->next = new_node;
    }
}

void
PrintList(struct node* head)
{
    struct node* temp = head;
    
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void LinkedListTest()
{
    struct node* head = NULL;

    for (int i = 1; i < 5; i++)
    {
        ListPrepend(&head, i);
    }

 //   ListPush(&head,19);

    PrintList(head);
}
