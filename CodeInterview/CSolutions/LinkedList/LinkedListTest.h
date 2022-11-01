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


inline void LinkedListTest_withTail()
{
    struct node* head = NULL;
    struct node* tail = NULL;
    

    for (int i = 1; i < 5; i++)
    {
        PushFront_withTail(&head, &tail, i);
    }

    PrintList_withTail(head,tail);
    PushFront_withTail(&head, &tail, 5);
    PrintList_withTail(head,tail);
    PushBack_withTail(&head,&tail, 34);
    PrintList_withTail(head,tail);
    printf("the result of find number 89 is %i \n", SearchNode(head, 89));

    int size = 0;
    size = GetListSize_withTail(head,tail);

    printf("deleted the value %d \n", RemoveNodeByValue(&head, 2));

    PrintList_withTail(head,tail);
    printf("the size of the linked list is : %i \n", GetListSize(head));
    printf("the linked list is empty or not : %i \n", IsEmptyListOrNot(head));

    GetValueAtIndex_withTail(head,tail, 4);
    PopFront_withTail(&head,&tail);
    PrintList_withTail(head,tail);

    printf("pop the end of the list : %i \n", PopBack(&head));
    PrintList_withTail(head,tail);
    GetValueFront_withTail(head,tail);
    GetValueEnd_withTail(head,tail);
    ReplaceValueAtIndex_withTail(head,tail, 0, 8);
    PrintList_withTail(head,tail);
    InsertValueAtIndex_withTail(head,tail, 1,18);
    PrintList_withTail(head,tail);
    RemoveNodeByIndex_withTail(&head, &tail, 0);
    PrintList_withTail(head,tail);
    InsertValueAtIndex_withTail(head,tail, 1,48);
    PrintList_withTail(head,tail);
    ReverseList_withTail(&head,&tail);
    PrintList_withTail(head,tail);
    FindKthLast_withTail(head,tail,2);
}