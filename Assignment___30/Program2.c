//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a program which checks whether 5th & 18th bit is On or OFF.                   
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UNIT iNo, int iPos)
{
    UNIT iMask = 1;
    iMask = 1 << iPos-1;
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
    UNIT iValue = 0, iValue1 = 5,iValue2 = 18;

    bool bRet1 = false;
    bool bRet2 = false;


    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    bRet1 = ChkBit(iValue,iValue1);

    if(bRet1 == true)
    {
        printf("5th bit is ON\n");
    }
    else
    {
        printf("5th bit is OFF\n");
    }

    bRet2 = ChkBit(iValue,iValue2);

     if(bRet2 == true)
    {
        printf("18th bit is ON\n");
    }
    else
    {
        printf("18th bit is OFF\n");
    }

    return 0;

}

