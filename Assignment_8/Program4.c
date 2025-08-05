//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Used to accept temperature in Fahrenheit and convert it into celsius.(1 celsius = (Fahrenheit - 32) * (5/9))
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_______________________________________________________________________________________________________________________________


#include<stdio.h>

double FhtoCs(float fTemp)
{
    double iCel = 0;

    return (fTemp - 32) * (5/9);
    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%d in Fahrenheit is %d ",fValue,dRet);

    return 0;
}