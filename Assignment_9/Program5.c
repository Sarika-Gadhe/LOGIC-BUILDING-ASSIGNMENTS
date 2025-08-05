//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Write a program which accept number from user and count frequency of such a digit which are less than 6.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_______________________________________________________________________________________________________________________________

#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0,iCount = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

   iRet = Count(iValue);
   printf("%d",iRet);

  

    return 0;
}