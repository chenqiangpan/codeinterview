#include <stdio.h>
#include<stdlib.h>



typedef struct node
{
    int data;
    struct node* next;
} node;

void PushFront(struct node** head, int val);

void PushBack(struct node** head, int val);

void PrintList(struct node* head);

int SearchNode(struct node* head, int val);

int RemoveNodeByValue(struct node** head, int val);

void PopFront(struct node** head);

int PopBack(struct node** head);

int GetListSize(struct node* head);

int IsEmptyListOrNot(struct node* head);

void GetValueAtIndex(struct node* head, int index);

void ReplaceValueAtIndex(struct node* head, int index, int val);

void InsertValueAtIndex(struct node* head, int index, int val);


void RemoveNodeByIndex(struct node** head, int index);


void GetValueFront(struct node* head);

void GetValueEnd(struct node* head);


void ReverseList(struct node** head);


void FindKthLast(struct node* head, int k);












void PushFront_withTail(node** head, node** tail, int val);

void PushBack_withTail(node** head, node** tail,int val);

void PrintList_withTail(node* head,node* tail);

int SearchNode_withTail(node* head ,node* tail,int val);

int RemoveNodeByValue_withTail(node** head, node** tail, int val);

void PopFront_withTail(node** head, node** tail);

int PopBack_withTail(node** head, node** tail);

int GetListSize_withTail(node* head,node* tail);

int IsEmptyListOrNot_withTail(node* head,node* tail);

void GetValueAtIndex_withTail(node* head,node* tail,int index);

void ReplaceValueAtIndex_withTail(node* head, node* tail,int index, int val);

void InsertValueAtIndex_withTail(node* head, node* tail,int index, int val);

void RemoveNodeByIndex_withTail(node** head, node** tail,int index);

void GetValueFront_withTail(node* head,node* tail);

void GetValueEnd_withTail(node* head,node* tail);

void ReverseList_withTail(node** head, node** tail);

void FindKthLast_withTail(node* head, node* tail,int k);
