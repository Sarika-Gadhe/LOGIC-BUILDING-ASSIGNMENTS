//_________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Used to Accept single digit number from user and print it into word.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 9)
    {
        printf("Invalid Number");
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}