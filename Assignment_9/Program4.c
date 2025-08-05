//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Write a program which accept number from user and count frequency of 4 in it.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_______________________________________________________________________________________________________________________________

#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0,iCount = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number : \n");
   scanf("%d",&iValue);

   iRet = CountFour(iValue);
   printf("%d",iRet);

  

    return 0;
}