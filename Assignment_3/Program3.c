//____________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Used to Accept number from user and print even factor of that number
//  Author :        Sarika Devidas Gadhe
//  Date :          10/05/2025
//
//____________________________________________________________________________________________


#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo/2; i++)
    {
        if(((iNo % i)==0) && (i % 2 ==0))
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

    DisplayEvenFactor(iValue);

    return 0;
}
