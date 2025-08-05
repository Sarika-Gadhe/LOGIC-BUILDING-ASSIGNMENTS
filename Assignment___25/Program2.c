//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Write a program which accept string from user and convert it into upper case.                     
//
//                   Input :   "Marvellous Multi OS"
//                   Output : MARVELLOUS MULTI OS
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

    StruprX(arr);
    

    return 0;

}



