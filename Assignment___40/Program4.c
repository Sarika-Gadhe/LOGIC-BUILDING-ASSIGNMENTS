//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a recurive program which display below pattern.
//
//                  Output :   A  B  C  D  E  F
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>



void Display()
{
    static int i = 6;
    static char ch = 'A';

    if(i >= 1)
    {
        printf("%c\t",ch);
        ch++;
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
