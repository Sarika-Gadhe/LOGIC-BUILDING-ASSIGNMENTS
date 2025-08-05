//_________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Used to Accept amount in US dollar and return its corresponding value in 
//                  Indian currency. Consider 1$ as 70 rupees.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

int  DollarToINR(int iNo)
{
    int iDollar = 0;
    
    return iNo * iDollar;
   
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD : ");
    scanf("%d",&iValue);
    
    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}