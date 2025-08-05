//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//
//  Description :   Write a recurive program which display below pattern.
//
//                  Output :   *  *  *  *  *
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>



void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("*\t");
        i++;
        Display();
    }
   
}

int main()
{
    Display();
    printf("\n");
    return 0 ;
}
