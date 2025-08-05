//_________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   program to find  of odd factorial of given number.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

int  EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    int iOFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        iFact = iFact * iCnt;
        if((iCnt % 2) != 0)
        {
            iOFact = iOFact * iCnt;
        }
    }
   
    return iOFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet = EvenFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}