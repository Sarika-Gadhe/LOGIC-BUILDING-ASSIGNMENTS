//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//
//  Description :   Write a program which display all elements which are perfect form singly linear linked list. 
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

void DisplayPerfect(PNODE first)
{
    int iSum = 0;
    int iCnt = 0;

    while(first != NULL)
    {
        iSum = 0;
        for(iCnt = 1; iCnt <= (first->data)/2; iCnt++)
        {
            if((first->data) % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == first->data)
        {
            printf("Perfect number is : %d\n",first->data);
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
    InsertFirst(&head,40);
    InsertFirst(&head,6);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);
    
    DisplayPerfect(head);

    return 0;
}

