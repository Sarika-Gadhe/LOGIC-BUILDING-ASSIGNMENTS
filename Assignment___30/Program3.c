//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//
//  Description :   Write a program which checks whether 7th & 15th & 21th & 28th bit is On or OFF.                   
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
    UNIT iValue = 0, iValue1 = 7,iValue2 = 15,iValue3 = 21, iValue4 = 28;

    bool bRet1 = false;
    bool bRet2 = false;
    bool bRet3 = false;
    bool bRet4 = false;


    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    bRet1 = ChkBit(iValue,iValue1);

    if(bRet1 == true)
    {
        printf("7th bit is ON\n");
    }
    else
    {
        printf("7th bit is OFF\n");
    }

    bRet2 = ChkBit(iValue,iValue2);

     if(bRet2 == true)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    bRet3 = ChkBit(iValue,iValue3);

     if(bRet3 == true)
    {
        printf("21th bit is ON\n");
    }
    else
    {
        printf("21th bit is OFF\n");
    }

    bRet4 = ChkBit(iValue,iValue4);

     if(bRet4 == true)
    {
        printf("28th bit is ON\n");
    }
    else
    {
        printf("28thbit is OFF\n");
    }

    return 0;

}

