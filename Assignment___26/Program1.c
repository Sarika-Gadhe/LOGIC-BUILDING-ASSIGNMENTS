//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Write a program which accept string from user and accept one character. Check whether that character is 
//                  present or not.                                    
//
//                   Input :   "Marvellous Multi OS"
//                             character : e
//                   Output : Character is present
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == ch )
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    
    return bFlag;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character is found");
    }
    else
    {
        printf("Character is not found");
    }
    

    return 0;

}



