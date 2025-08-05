//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a program which display smallest digits of all digits of all element from singly linear linked list.
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

void DisplaySmall(PNODE first )
{
    int iDigit = 0, iNo = 0,iSmall = 0;

    while(first != NULL)
    {
        iNo = first->data;
        iSmall = 10;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit <= iSmall)
            {
                iSmall = iDigit;   
            }
            iNo = iNo / 10;
        }
       printf("Small number is : %d\n",iSmall);
        first = first->next;
       
    }

    printf("\n"); 
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
  
    InsertFirst(&head,414);
    InsertFirst(&head,42);
    InsertFirst(&head,101);
    InsertFirst(&head,24);
    InsertFirst(&head,11);

    Display(head);
    
    DisplaySmall(head);


    return 0;
}

