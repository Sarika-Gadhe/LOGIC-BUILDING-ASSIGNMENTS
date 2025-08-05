//_________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   find factorial of given number.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);

    printf("Factorial of number is : %d",iRet);

    return 0;
}