#include <stdio.h>
#include<stdlib.h>


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

    new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = val;
    new_node->next = *head;
    *head = new_node;
}

void ListPush(struct node** head, int val)
{
    node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct node* lastNode = *head;

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

int SearchNode(struct node* head, int val)
{
    struct node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == val) return 1;
        else temp = temp->next;
    }
    return -1;
}

void DeleteNode(struct node** head, int key)
{
    struct node* temp;

    if ((*head)->data == key)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    else
    {
        struct node* current = *head;
        while (current->next != NULL)
        {
            if (current->next->data == key)
            {
                temp = current->next;
                current->next = current->next->next;
                free(temp);
                break;
            }
            else
            {
                current = current->next;
            }
        }
    }
}

void LinkedListTest()
{
    struct node* head = NULL;

    for (int i = 1; i < 5; i++)
    {
        ListPrepend(&head, i);
    }

    ListPush(&head, 19);
    ListPush(&head, 29);
    ListPrepend(&head, 5);

    printf("%i \n", SearchNode(head, 23));

    DeleteNode(&head, 5);
    DeleteNode(&head, 2);
    PrintList(head);
}
