//_________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Used to Accept N from user and print first 5 multiples of N.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }
 
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    MultipleDisplay(iValue);

    return 0;
}