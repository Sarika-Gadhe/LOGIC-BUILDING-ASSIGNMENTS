//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Accept character from user. If character is small display its corresponding capital character, and if it 
//                  capital then display its corresponding small. In other cases display as it is.   
//                  
//                      Input : Q           Input : 4
//                      Output : q          Output : 4           
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c",ch + 32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c",ch - 32);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%C", &cValue);

    Display(cValue);

    return 0;
}



