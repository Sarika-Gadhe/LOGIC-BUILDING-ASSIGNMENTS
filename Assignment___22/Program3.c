//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Accept Character from user and check whether it is digit or not (0 - 9).
//
//                          Input :   7
//                          Output :  It is Digit
//                          
//                          Input : d
//                          Output : It is not a Digit  
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    BOOL bFlag = FALSE;
    
    if((ch >= '0') && (ch <= '9' ))
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}

