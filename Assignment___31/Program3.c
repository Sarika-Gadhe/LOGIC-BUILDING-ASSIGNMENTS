//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//
//  Description :   Write a program which accept one number from user and toggle 7th bit of that number. Return 
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
    UNIT iMask = 0;

    iMask = 1;

    iMask = iMask << 6;
    
    iResult = iNo ^ iMask;
    

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

