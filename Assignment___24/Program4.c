//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Write a program which accept string from user and check whether it contains vowels in it or not.             
//
//                   Input :   "Marvellous"
//                   Output : contains vowel
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i'|| *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I'|| *str == 'O' || *str == 'U'  )
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
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;

}



