//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Accept Character from user and check whether it is capital or not (A-Z).
//
//                          Input :   F
//                          Output :  It is Capital Character 
//                          
//                          Input : d
//                          Output : It is not a Capital Character    
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z' ))
    {
        return 1;
    }

    return 0;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}

