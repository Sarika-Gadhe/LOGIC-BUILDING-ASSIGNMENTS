//_________________________________________________________
//
//  File name :     Program3.c
//  Description :   Used to display 5 to 1 numbers on screen
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//_________________________________________________________


#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}