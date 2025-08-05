//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Write a program which accept string from user and accept one character. Return frequency of that character.                                    
//
//                   Input :   "Marvellous Multi OS"
//                             character : M
//                   Output :   2
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch )
        {
           iCount++;
        }
        str++;
    }
    
    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character :\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

   printf("Character frequency is %d",iRet);
    

    return 0;

}



