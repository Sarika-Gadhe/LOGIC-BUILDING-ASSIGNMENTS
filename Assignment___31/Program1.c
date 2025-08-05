//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//
//  Description :   Write a program which accept one number from user and off 7th bit of that number if it is ON. Return 
//                  modified number.
//                  
//                  Input : 79
//                  Output : 15
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
    UNIT Result = 0;
    UNIT iMask = 0;

    iMask = 1;
    iMask = iMask << 6;
    iMask = ~iMask;
    
    Result = iNo & iMask;

    return Result;


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

