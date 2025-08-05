//_____________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Used to check whether it is divisible by 5 or not
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//_____________________________________________________________________


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    
    return 0;
}