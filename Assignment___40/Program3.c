//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//
//  Description :   Write a recurive program which display below pattern.
//
//                  Output :   5  4  3  2  1
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>



void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\t",i);
        i--;
        Display();
    }
 
}

int main()
{
    Display();
    printf("\n");
    return 0 ;
}
