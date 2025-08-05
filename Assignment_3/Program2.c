//____________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Used to Accept number from user and print factor of that number
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//____________________________________________________________________________________________


#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i < iNo; i++)
    {
        if((iNo % i)==0)
        {
                printf("%d ",i);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}
