//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a program which accept one number and position from user and off that bit. and Return modified number.
//    
//                  Input :  10   2
//                  Output : 8
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

UNIT OffBit(UNIT iNo,int iPos)
{
    UNIT Result = 0;
    UNIT iMask = 0;

    iMask = 1;
    iMask = iMask << (iPos-1);

    iMask = ~iMask;
    
    Result = iNo & iMask;

    return Result;


}

int main()
{
    UNIT iValue = 0, iLocation = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter Location that you want to check : ");
    scanf("%d",&iLocation);


    iRet = OffBit(iValue,iLocation);

    printf("Modified number is : %d\n",iRet);
   
    return 0;

}

