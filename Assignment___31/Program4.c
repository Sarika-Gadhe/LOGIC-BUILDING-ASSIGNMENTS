//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return 
//                  modified number.
//                  
//                  Input : 137
//                  Output : 201
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;


UNIT ToggleBit(UNIT iNo)
{
    UNIT iResult = 0;
    UNIT iMask1 = 0;
    UNIT iMask2 = 0;

    iMask1 = 1,iMask2 = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;
    
    iResult = iNo ^ iMask1;
    iResult = iResult ^ iMask2;
    

    return iResult;


}

int main()
{
    UNIT iValue = 0;
    int iRet = 0;

    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number : %d\n",iRet);

   
    return 0;

}

