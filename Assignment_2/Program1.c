//____________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Used to Accept one number from user and print that number of * on screen
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//____________________________________________________________________________________________


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt < iNo)
    {
        printf(" *\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
