//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//
//  Description :   Write a program which returns addition of all even elements from singly linear linked list. 
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

int SummationEven(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        if(first->data % 2 == 0)
        {
            iSum = iSum + first->data;
            first = first->next;
        }
    }

    return iSum;
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
    
    iRet = SummationEven(head);

    printf("Summation of all even elements is : %d\n",iRet);

    return 0;
}

