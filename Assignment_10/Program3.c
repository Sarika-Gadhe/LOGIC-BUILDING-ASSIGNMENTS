//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Write a program which accept number from user and return the count of digits in between 3 and 7.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_______________________________________________________________________________________________________________________________


#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0,iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}