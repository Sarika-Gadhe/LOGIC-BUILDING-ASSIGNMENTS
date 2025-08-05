//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//
//  Description :   Write a program which display product of all digits of all element from singly linear linked list.(Don't consider 0) 
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

void DisplayProduct(PNODE first )
{
    int iDigit = 1, iNo = 1,iProduct = 1;

    while(first != NULL)
    {
        iNo = first->data;
        iProduct = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProduct = iProduct * iDigit;
            iNo = iNo / 10;
        }
        printf("Product of number is : %d\n",iProduct);
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
    InsertFirst(&head,11);
    InsertFirst(&head,24);
    InsertFirst(&head,11);

    Display(head);
    
    DisplayProduct(head);


    return 0;
}

