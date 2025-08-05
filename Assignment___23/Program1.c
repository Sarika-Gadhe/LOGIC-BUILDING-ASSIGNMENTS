//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Write a program which displays ASCII table. Table contains symbol,Decimal, Hexadecimal and octal representation
//                  of every member from 0 to 255.                      
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    
    printf("-----------------------------------------------------------------------------\n");
    printf("| Symbol\t| Decimal\t| Hex\t| Octal |\n");
    printf("-----------------------------------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
       printf("|   %c\t\t|   %d\t\t| %x\t| %o   |\n", iCnt, iCnt, iCnt, iCnt);
    }
    printf("-----------------------------------------------------------------------------\n");

}

int main()
{
    DisplayASCII();

    return 0;
}



