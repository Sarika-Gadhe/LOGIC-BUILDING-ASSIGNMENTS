//_________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Used to Accept number from user and display its table.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=10; iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Table(iValue);

    return 0;
}