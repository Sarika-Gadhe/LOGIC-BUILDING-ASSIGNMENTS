//____________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Used to Accept number from user and display its multiplication of factors
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//____________________________________________________________________________________________


#include<stdio.h>

int MultiFact(int iNo)
{
    int iMult = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}