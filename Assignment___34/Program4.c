//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a program which return largest element from singly linear linked list.
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;

    }
}

int Maximum(PNODE first)
{
    int iMax = first->data;

    while(first != NULL)
    {
        if(iMax < first->data)
        {
            iMax = first->data;
        }
        first = first->next;
    }

    return iMax;
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);
    
    iRet = Maximum(head);
    
    printf("Maximum element in Linked List is :  %d \n",iRet);

    return 0;
}

