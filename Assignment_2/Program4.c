//____________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Used to Accept two numbers from user and display first number in 
//                  second number of times
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//____________________________________________________________________________________________


#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}