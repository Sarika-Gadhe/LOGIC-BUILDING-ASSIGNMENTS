//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Write a program which accept string from user and count number of white spaces.                     
//
//                   Input :   "Marvellous Infosystems"
//                   Output : 1
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

int CountWhiteSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ') 
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
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhiteSpace(arr);

    printf("%d",iRet);
    

    return 0;

}



