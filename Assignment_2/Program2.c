//_________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Used to Accept one number from and print that number of * on screen
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//_________________________________________________________________________________________


#include<stdio.h>

void Display(int iNo)
{
    int iVal = 0;
    while(iNo > iVal)
    {
        printf(" *\n");
        iNo--;
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