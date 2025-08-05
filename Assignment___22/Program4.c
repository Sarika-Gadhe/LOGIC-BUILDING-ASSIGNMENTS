//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Accept Character from user and check whether it is small case or not (a-z).
//
//                          Input :   g
//                          Output :  It is Small case Character
//                          
//                          Input : D
//                          Output : It is not a Small case Character 
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z' ))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}

