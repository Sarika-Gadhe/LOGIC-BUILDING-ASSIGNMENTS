//_________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   program to find  of even factorial of given number.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

int  EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    int iEFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        iFact = iFact * iCnt;
        if((iCnt % 2) == 0)
        {
            iEFact = iEFact * iCnt;
        }
    }
   
    return iEFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}