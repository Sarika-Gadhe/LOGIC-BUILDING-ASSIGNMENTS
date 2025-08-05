//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Write a program which accept number from user and return difference between summation of even digits and 
//                  summation of odd digits.    
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_______________________________________________________________________________________________________________________________


#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,iESum = 0, iOSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iESum = iESum + iDigit;
        }
        if((iDigit % 2) != 0)
        {
            iOSum = iOSum + iDigit;
        }
       
        iNo = iNo / 10;
    }
    return iESum - iOSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}