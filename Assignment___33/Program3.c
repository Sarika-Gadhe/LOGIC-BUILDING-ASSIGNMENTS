//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//
//  Description :   Write a program which accept one number from user and check whether 9th or 12th bits  is ON or OFF.
//
//                  Input :  257
//                  Output : TRUE
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool CommonOnBits(UNIT iNo,int iPos)
{
   UNIT iMask = 1;
   iMask = iMask << iPos-1;
   UNIT iResult = iMask & iNo;
   return iResult;
}

int main()
{
    UNIT iValue = 0,iValue1 = 9,iValue2 = 12;
    bool bRet1,bRet2 = false;

    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    bRet1 = CommonOnBits(iValue,iValue1);
    bRet2 = CommonOnBits(iValue,iValue2);
    
    if(bRet1 == true)
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }

    if(bRet2 == true)
    {
        printf("12th bit is ON\n");
    }
    else
    {
        printf("12th bit is OFF\n");
    }
    
   
    return 0;

}

