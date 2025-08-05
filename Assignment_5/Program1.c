//_________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Used to Accept number from user and print that number of $ & * on screen.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("$ * ");
    }
   
 
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return 0;
}