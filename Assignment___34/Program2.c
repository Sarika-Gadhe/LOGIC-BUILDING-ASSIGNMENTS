//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a program which search last occurence of particular elements from singly linear linked list. and 
//                  function should return position at which elements is found.
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

int SearchLastOcc(PNODE first , int no)
{
    int iPos = 1;
    int iLastPos = -1;

    while(first != NULL)
    {
        if(first->data == no)
        {
            iLastPos = iPos;
        }

        first = first->next;
        iPos++;
    }

    return iLastPos;
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

    InsertFirst(&head,100);
    InsertFirst(&head,90);
    InsertFirst(&head,80);
    InsertFirst(&head,30);
    InsertFirst(&head,60);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);
    
    iRet = SearchLastOcc(head,30);
    
    printf("Last Occurance is :  %d \n",iRet);

    return 0;
}

