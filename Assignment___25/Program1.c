//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Write a program which accept string from user and convert it into lower case.                     
//
//                   Input :   "Marvellous Multi OS"
//                   Output : marvellous multi os
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void StrlwrX(char *str)
{
   while(*str != '\0')
   {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        printf("%c",*str);
        str++;
   }
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    StrlwrX(arr);
    

    return 0;

}



