//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   write a program which accept number from user and check whether it contains 0 int it or not.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_______________________________________________________________________________________________________________________________


#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    BOOL bFlag = FALSE;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = TRUE;
            break;
        }
        iNo = iNo /10;
    }

    return bFlag;
    
}

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;

   printf("Enter number : \n");
   scanf("%d",&iValue);

   bRet = ChkZero(iValue);

   if(bRet == TRUE)
   {
        printf("It contains Zero");
   }
   else
   {
        printf("There is no zero");
   }

    return 0;
}