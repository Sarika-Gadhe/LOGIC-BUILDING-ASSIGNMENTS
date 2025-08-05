//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Write a program which accept string from user and reverse that string in place.                                   
//
//                   Input :   abcd
//                   Output :   dcba
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void StrRevX(char *str)
{
    char *start =   NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;
    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);
   
    StrRevX(arr);

   printf("Modified string is : %s",arr);
    

    return 0;

}



