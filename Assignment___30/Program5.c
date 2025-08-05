//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//
//  Description :   Write a program which checks whether first and last bit is ON or OFF. First bit means bit number 1 and
//                  last bit means bit number 32.                 
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

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
    UNIT iValue = 0, iValue1 = 1,iValue2 = 32;

    bool bRet1 = false;
    bool bRet2 = false;

    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    bRet1 = ChkBit(iValue,iValue1);

    if(bRet1 == true)
    {
        printf("First bit is ON\n");
    }
    else
    {
        printf("First bit is OFF\n");
    }

    bRet2 = ChkBit(iValue,iValue2);

     if(bRet2 == true)
    {
        printf("Last bit is ON\n");
    }
    else
    {
        printf("Last bit is OFF\n");
    }

   

    return 0;

}

