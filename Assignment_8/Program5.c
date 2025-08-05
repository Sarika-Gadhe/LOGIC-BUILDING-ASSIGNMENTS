//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   write a program which accept area in square feet and convert it into square meter(1 square feet = 0.0929 square meter)
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_______________________________________________________________________________________________________________________________


#include<stdio.h>

double SquareMeter(int iValue)
{
    double SquareFeet = 0.0929;

    return iValue * SquareFeet;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d in square meter is %lf ",iValue,dRet);

    return 0;
}