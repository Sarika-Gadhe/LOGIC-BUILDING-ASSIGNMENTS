//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a program which accept one number from user and off 7th and 10th bit of that number if it is ON. Return 
//                  modified number.
//                  
//                  Input : 577
//                  Output : 1
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

UNIT OffBit(UNIT iNo)
{
    UNIT iResult = 0;
    UNIT iMask1 = 0;
    UNIT iMask2 = 0;

    iMask1 = 1, iMask2 = 1;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;
    
    iResult = iNo & iMask1;
    iResult = iResult & iMask2;


    return iResult;


}

int main()
{
    UNIT iValue = 0;
    int iRet = 0;

    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Modified number : %d\n",iRet);

   
    return 0;

}

