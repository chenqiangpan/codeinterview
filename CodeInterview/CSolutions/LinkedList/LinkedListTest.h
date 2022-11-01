#pragma once
#include "LinkedList_Head.h"

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
    InsertValueAtIndex(head, 1,48);
    PrintList(head);
    ReverseList(&head);
    PrintList(head);
    FindKthLast(head,2);
}
