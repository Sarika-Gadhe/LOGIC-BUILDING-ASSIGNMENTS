//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//                  
//                      Input :   A     
//                      Output :  Decimal : 65
//                                Octal : 0101
//                                Hexadecimal : 0x41  
//         
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : 0x%x\n",ch);
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%C", &cValue);

    Display(cValue);

    return 0;
}



