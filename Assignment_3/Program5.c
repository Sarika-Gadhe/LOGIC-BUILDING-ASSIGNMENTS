//____________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Used to Accept one character from user and check whether that character 
//                  is vowel (a,e,i,o,u) or not 
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//____________________________________________________________________________________________


#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch )
{
     
     if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' )
     {
          return TRUE;
     }
     else
     {
          return FALSE;
     }
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
          printf("It is Vowel");
    }
    else
    {
          printf("It is not Vowel");
    }

    

    return 0;
}
