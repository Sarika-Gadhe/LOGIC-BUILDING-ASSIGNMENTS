//_________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Used to Accept number from user and return difference between summation 
//                  of all its factors and non factors.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNFactSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       
        if((iNo % iCnt) != 0)
        {
            iNFactSum = iNFactSum + iCnt;
        }
        
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
       
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        
    }

    return iFactSum - iNFactSum;
   
 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d ",iRet);

    return 0;
}