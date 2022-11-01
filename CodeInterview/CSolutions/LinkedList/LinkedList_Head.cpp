#include "LinkedList_Head.h"
#include <stdio.h>
#include<stdlib.h>

//implemented without tail
void
PushFront(struct node** head, int val)
{
    node* new_node;

    new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = val;
    new_node->next = *head;
    *head = new_node;
}

void PushBack(struct node** head, int val)
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

void PopFront(struct node** head)
{
    int i = (*head)->data;
    struct node* temp;
    temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("the front value %d is removed", i);
}

int PopBack(struct node** head)
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


int GetListSize(struct node* head)
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

int IsEmptyListOrNot(struct node* head)
{
    if (GetListSize(head) == 0)
        return 1;
    else return 0;
}


void GetValueAtIndex(struct node* head, int index)
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

void ReplaceValueAtIndex(struct node* head, int index, int val)
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

void InsertValueAtIndex(struct node* head, int index, int val)
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
        beforeTemp = temp;
        temp = temp->next;
        index--;
    }

    new_node->next = temp;
    beforeTemp->next = new_node;

    printf("a new element has inserted at index %d , it has value %d \n", originalIndex, temp->data);
}


void RemoveNodeByIndex(struct node** head, int index)
{
    const int originalIndex = index;
    int size = GetListSize(*head);

    if (index >= size) printf("the value is beyond list size");


    if (index == 0)
    {
        *head = (*head)->next;
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


void GetValueFront(struct node* head)
{
    int value;
    value = head->data;
    printf("the value at front is %d \n", value);
}

void GetValueEnd(struct node* head)
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


void ReverseList(struct node** head)
{
    struct node* prev = nullptr;
    struct node* current = *head;
    struct node* next = *head;

    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
    printf("the reversed list now is: ");
    PrintList(*head);
}


void FindKthLast(struct node* head, int k)
{
    int SIZE = GetListSize(head);
    int original_k = k;
    node* ptr1 = head;
    node* ptr2 = head;

    if (k > SIZE)
    {
        printf("the %d is bigger than the size of the list : %d !", original_k, SIZE);
    }
    else
    {
        while (k != 0)
        {
            ptr1 = ptr1->next;
            k--;
        }

        while (ptr1 != nullptr)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        printf("the %d element from last is %d", original_k, ptr2->data);
    }
}


// implemented with tail


void
PushFront_withTail(struct node** head, node** tail, int val)
{
    node* new_node;

    new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = val;
    new_node->next = *head;
    *head = new_node;
    if (new_node->next == nullptr)
    {
        *tail = new_node;
    }
}

void PushBack_withTail(struct node** head, struct node** tail, int val) // O(1)
{
    node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = NULL;

    node* last_node = *tail;
    
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        last_node->next = new_node;
        *tail = new_node;
    }
}

void PrintList_withTail(struct node* head, node* tail)
{
    struct node* temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int SearchNode_withTail(struct node* head, node* tail, int val)
{
    struct node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == val) return 1;
        else temp = temp->next;
    }
    return -1;
}


int RemoveNodeByValue_withTail(struct node** head, node** tail, int val)
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

void PopFront_withTail(struct node** head, node** tail)
{
    int i = (*head)->data;
    struct node* temp;
    temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("the front value %d is removed", i);
}

int PopBack_withTail(struct node** head, node** tail)
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


int GetListSize_withTail(struct node* head, node* tail)
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

int IsEmptyListOrNot_withTail(struct node* head, node* tail)
{
    if (GetListSize(head) == 0)
        return 1;
    else return 0;
}


void GetValueAtIndex_withTail(struct node* head, node* tail, int index)
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

void ReplaceValueAtIndex_withTail(struct node* head, node* tail, int index, int val)
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

void InsertValueAtIndex_withTail(struct node* head, node* tail, int index, int val)
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
        beforeTemp = temp;
        temp = temp->next;
        index--;
    }

    new_node->next = temp;
    beforeTemp->next = new_node;

    printf("a new element has inserted at index %d , it has value %d \n", originalIndex, temp->data);
}


void RemoveNodeByIndex_withTail(struct node** head, node** tail, int index)
{
    const int originalIndex = index;
    int size = GetListSize(*head);

    if (index >= size) printf("the value is beyond list size");


    if (index == 0)
    {
        *head = (*head)->next;
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


void GetValueFront_withTail(struct node* head, node* tail)
{
    int value;
    value = head->data;
    printf("the value at front is %d \n", value);
}

void GetValueEnd_withTail(struct node* head, node* tail)
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


void ReverseList_withTail(struct node** head, node** tail)
{
    struct node* prev = nullptr;
    struct node* current = *head;
    struct node* next = *head;

    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
    printf("the reversed list now is: ");
    PrintList(*head);
}


void FindKthLast_withTail(struct node* head, node* tail, int k)
{
    int SIZE = GetListSize(head);
    int original_k = k;
    node* ptr1 = head;
    node* ptr2 = head;

    if (k > SIZE)
    {
        printf("the %d is bigger than the size of the list : %d !", original_k, SIZE);
    }
    else
    {
        while (k != 0)
        {
            ptr1 = ptr1->next;
            k--;
        }

        while (ptr1 != nullptr)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        printf("the %d element from last is %d", original_k, ptr2->data);
    }
}
