//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Write a program which accept number from user and return multiplication of all digits.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_______________________________________________________________________________________________________________________________


#include <stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0,iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}