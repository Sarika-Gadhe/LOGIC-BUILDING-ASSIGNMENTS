//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a program which accept one number and position from user and toggle that bit. and Return modified number.
//    
//                  Input :  10   3
//                  Output : 14
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

UNIT ToggleBit(UNIT iNo,int iPos)
{
    UNIT Result = 0;
    UNIT iMask = 0;

    iMask = 1;

    iMask = iMask << (iPos-1);
    
    Result = iNo ^ iMask;

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


    iRet = ToggleBit(iValue,iLocation);

    printf("Modified number is : %d\n",iRet);
   
    return 0;

}

