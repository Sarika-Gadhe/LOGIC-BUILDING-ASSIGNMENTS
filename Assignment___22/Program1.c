//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Accept Character from user and check whether it is alphabet or not (A-Z , a-z).
//
//                          Input :   F
//                          Output :  TRUE 
//                          
//                          Input : &
//                          Output : FALSE    
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z' )) || ((ch >= 'a') && (ch <= 'z' )))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}

