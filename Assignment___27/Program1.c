//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Write a program which accept string from user and copy the contents of that string into another string.                                  
//
//                   Input :   "Marvellous Multi OS"
//  
//                   Output :  "Marvellous Multi OS"                in another string
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}


int main()
{
   char arr[30] = "Marvellous Multi OS";
   char brr[30];          

   StrCpyX(arr,brr);

   printf("%s",brr);
    

    return 0;

}



