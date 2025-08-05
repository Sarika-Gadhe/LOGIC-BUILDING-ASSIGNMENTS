//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//
//  Description :   Write a program which accept one number from user and ON its first 4 bits. and 
//                  Return modified number.
//                  
//                  Input : 73
//                  Output : 79
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;


UNIT OnBit(UNIT iNo)
{
    UNIT iResult = 0x0000000F;
    UNIT iMask = 0;

    iMask = 15;
    iResult = iMask | iNo;
   
    return iResult;


}

int main()
{
    UNIT iValue = 0;
    int iRet = 0;

    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("Modified number : %d\n",iRet);

   
    return 0;

}

