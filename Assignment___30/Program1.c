//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Write a program which checks whether 15th bit is On or OFF.                   
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UNIT iNo)
{
    UNIT iMask = 4000;
    UNIT iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    UNIT iValue = 0;
    bool bRet = false;

    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF");
    }

    return 0;

}

