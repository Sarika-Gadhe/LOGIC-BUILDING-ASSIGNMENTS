//_________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Used to Accept number from user and print its numbers line .
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <=iNo; iCnt++)
    {
        printf("%d ",iCnt);
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