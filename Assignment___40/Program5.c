//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//
//  Description :   Write a recurive program which display below pattern.
//
//                  Output :   a  b  c  d  e  f
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>



void Display()
{
    static int i = 6;
    static char ch = 'a';

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
