#include <stdio.h>
#include<stdlib.h>


void LinkedListTest();

typedef struct node
{
    int data;
    struct node* next;
} node;

inline void
PushFront(struct node** head, int val)
{
    node* new_node;

    new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = val;
    new_node->next = *head;
    *head = new_node;
}

inline void PushBack(struct node** head, int val)
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

inline void
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

inline int SearchNode(struct node* head, int val)
{
    struct node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == val) return 1;
        else temp = temp->next;
    }
    return -1;
}


int RemoveNodeByValue(struct node** head, int val)
{
    struct node* temp;

    if ((*head)->data == val)
    {
        temp = *head;
        *head = (*head)->next;
        return temp->data;
        free(temp);
    }
    else
    {
        struct node* current = *head;
        while (current->next != NULL)
        {
            if (current->next->data == val)
            {
                temp = current->next;
                current->next = current->next->next;
                return temp->data;
                free(temp);
                break;
            }
            else
            {
                current = current->next;
            }
        }
    }
    return 0;
}

inline void PopFront(struct node** head)
{
    int i = (*head)->data;
    struct node* temp;
    temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("the front value %d is removed", i);
}

inline int PopBack(struct node** head)
{
    if (*head == NULL)
    {
        printf("there is nothing to pop");
    }
    else
    {
        struct node* lastNode = *head;
        struct node* secondLastNode = NULL;

        while (lastNode->next != nullptr)
        {
            secondLastNode = lastNode;
            lastNode = lastNode->next;
        }

        int i = lastNode->data;

        if (secondLastNode)
        {
            secondLastNode->next = NULL;
        }
        else
        {
            *head = NULL;
        }
        free(lastNode);

        return i;
    }
    return 0;
}


inline int GetListSize(struct node* head)
{
    struct node* temp = head;
    int size = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        size ++;
    }

    return size;
}

inline int IsEmptyListOrNot(struct node* head)
{
    if (GetListSize(head) == 0)
        return 1;
    else return 0;
}


inline void GetValueAtIndex(struct node* head, int index)
{
    int originalIndex = index;
    struct node* temp = head;
    int size = GetListSize(head);

    if (index == size) printf("the value is NULL");
    if (index > size) printf("the value is beyond list size");

    while (index > 0)
    {
        temp = temp->next;
        index --;
    }

    printf("the value at index %d is %d \n", originalIndex, temp->data);
}

inline void ReplaceValueAtIndex(struct node* head, int index, int val)
{
    int originalIndex = index;
    struct node* temp = head;
    int size = GetListSize(head);

    if (index == size)
    {
        PushBack(&head, val);
    }
    if (index > size) printf("the value is beyond list size");

    while (index > 0)
    {
        temp = temp->next;
        index--;
    }

    temp->data = val;

    printf("the element at index %d has a new value %d \n", originalIndex, temp->data);
}

inline void InsertValueAtIndex(struct node* head, int index, int val)
{
    node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = NULL;

    
    int originalIndex = index;
    struct node* temp = head;
    struct node* beforeTemp = head;
    int size = GetListSize(head);

    if (index == size)
    {
        PushBack(&head, val);
    }
    if (index > size) printf("the value is beyond list size");

    while (index > 0)
    {
        beforeTemp =temp;
        temp = temp->next;
        index--;
    }

    new_node->next = temp;
    beforeTemp->next = new_node;

    printf("a new element has inserted at index %d , it has value %d \n", originalIndex, temp->data);
}



inline void RemoveNodeByIndex(struct node** head, int index)
{


    const int originalIndex = index;
    int size = GetListSize(*head);

    if (index >= size) printf("the value is beyond list size");


    if(index==0)
    {
        *head= (*head)->next;
    }

    else
    {
        struct node* temp = *head;
        struct node* beforeTemp = *head;
        
        while (index > 0)
        {
            beforeTemp = temp;
            temp = temp->next;
            index--;
        }
        beforeTemp->next = temp->next;
        free(temp);
    }
    printf("the element at index %d has removed \n", originalIndex);
}


inline void GetValueFront(struct node* head)
{
    int value;
    value = head->data;
    printf("the value at front is %d \n", value);
}

inline void GetValueEnd(struct node* head)
{
    struct node* temp = head;
    int size = GetListSize(head);

    while (size > 1)
    {
        temp = temp->next;
        size --;
    }

    printf("the value at end is %d \n", temp->data);
}


inline void LinkedListTest()
{
    struct node* head = NULL;

    for (int i = 1; i < 5; i++)
    {
        PushFront(&head, i);
    }

    PrintList(head);
    PushFront(&head, 5);
    PrintList(head);
    PushBack(&head, 34);
    PrintList(head);
    printf("the result of find number 89 is %i \n", SearchNode(head, 89));

    int size = 0;
    size = GetListSize(head);

    printf("deleted the value %d \n", RemoveNodeByValue(&head, 2));

    PrintList(head);
    printf("the size of the linked list is : %i \n", GetListSize(head));
    printf("the linked list is empty or not : %i \n", IsEmptyListOrNot(head));

    GetValueAtIndex(head, 4);
    PopFront(&head);
    PrintList(head);

    printf("pop the end of the list : %i \n", PopBack(&head));
    PrintList(head);
    GetValueFront(head);
    GetValueEnd(head);
    ReplaceValueAtIndex(head, 0, 8);
    PrintList(head);
    InsertValueAtIndex(head, 1,18);
    PrintList(head);
    RemoveNodeByIndex(&head, 0);
    PrintList(head);
}
