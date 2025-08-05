//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Write a program which accept string from user and toggle the case.                     
//
//                   Input :   "Marvellous Multi OS"
//                   Output : mARVELLOUS mULTI os
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void StruprX(char *str)
{
   while(*str != '\0')
   {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
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

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    StruprX(arr);
    

    return 0;

}



