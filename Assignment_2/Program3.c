//____________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Used to Accept one number from user if number is less than 10 then print
//                  "Hello" otherwise print "Demo"
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//____________________________________________________________________________________________


#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10 )
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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