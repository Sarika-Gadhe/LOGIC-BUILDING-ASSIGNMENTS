//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Write a program which accept string from user and accept one character. Return index of first occurence of 
//                  that character.                                    
//
//                   Input :   "Marvellous Multi OS"
//                             character : M
//                   Output :   0
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
       if(*str == ch)
       { 
            return iCount;
       }
       iCount++;
       str++;
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

    iRet = FirstChar(arr,cValue);

   printf("Character location  is %d",iRet);
    

    return 0;

}



