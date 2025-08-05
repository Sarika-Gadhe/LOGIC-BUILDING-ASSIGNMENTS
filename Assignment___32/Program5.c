//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//
//  Description :   Write a program which accept one number from user and toggle contents of first and last nibble of that number
//                   and Return modified number.
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;


UNIT ToggleBit(UNIT iNo)
{
    UNIT Result = 0;
    UNIT iMask = 0;

    iMask = 0xF000000F;
    
    Result = iNo ^ iMask;                  // Highest 4 bits of 32-bit = bits 28 to 31
                                           // Lowest 4 bits  = bits 0 to 3            

    return Result;


}

int main()
{
    UNIT iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);


    iRet = ToggleBit(iValue);

    printf("Modified number is : %d\n",iRet);
   
    return 0;

}

