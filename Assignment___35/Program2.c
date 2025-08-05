//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a program which display all elements which are prime form singly linear linked list. 
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

void DisplayPrime(PNODE first)
{
    int iCnt = 0;
    int iFactCnt = 0;

    while(first != NULL)
    {
        iFactCnt = 0;

        for(iCnt = 2; iCnt <= (first->data)/2; iCnt++)
        {
            if(first->data % iCnt == 0)
            {
                iFactCnt++;
            }
        }

        if(iFactCnt == 2)
        {
            printf("Prime number is : %d\n", first->data);
        }

        first = first->next;
    }
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
  
    InsertFirst(&head,28);
    InsertFirst(&head,41);
    InsertFirst(&head,6);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    Display(head);
    
    DisplayPrime(head);

    return 0;
}

