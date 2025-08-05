//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a recurive program which display below pattern.
//
//                  Output :   1  2  3  4  5
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
        printf("%d\t",i);
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
