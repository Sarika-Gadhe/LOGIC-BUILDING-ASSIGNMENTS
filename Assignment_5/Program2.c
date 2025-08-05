//_________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Used to Accept number from user and print numbers till that number.
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

    for(iCnt = 1; iCnt <=iNo; iCnt++)
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