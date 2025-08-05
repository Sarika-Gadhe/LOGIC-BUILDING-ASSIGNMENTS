//_________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   write program which returns difference between Even factorial and odd 
//                   of given number.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

int  FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    int iOFact = 1;
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
        if((iCnt % 2) != 0)
        {
            iOFact = iOFact * iCnt;
        }
    }
   
   
    return iEFact - iOFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet = FactorialDiff(iValue);

    printf("Factorial differnce is %d",iRet);

    return 0;
}