//_________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Used to Accept number from user and display its table in reverse order.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ",iNo * iCnt);
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    TableRev(iValue);

    return 0;
}