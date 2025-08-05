//________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Program to Accept one number from user and print that number of * on screen
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}