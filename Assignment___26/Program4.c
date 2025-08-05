//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Write a program which accept string from user and accept one character. Return index of last occurence of 
//                  that character.                                    
//
//                   Input :   "Marvellous Multi OS"
//                             character : M
//                   Output :   11
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0,iCnt = 0;

    while(*str != '\0')
    {
        iCount++;
       str++;
    }
    str--;

    for(iCnt = iCount-1; iCnt >= 0; iCnt--,str--)
    {
        if(*str == ch)
        {
            return iCnt;
        }
        
    }
    return -1;
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

    iRet = LastChar(arr,cValue);

   printf("Character location  is %d",iRet);
    

    return 0;

}



