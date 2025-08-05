//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Accept character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
//                  
//                      Input :   %          
//                      Output :  It is special character.
//                      
//                      Input : d
//                      Output : It is not special character.     
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return true;
    }
    else
    {
         return false;
    }
    
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%C", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }

    ChkSpecial(cValue);

    return 0;
}



