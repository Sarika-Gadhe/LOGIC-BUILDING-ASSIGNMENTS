//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//
//  Description :   Write a program which accept one number and position from user and check whether bit at that position is ON
//                  or OFF. If bit is one return TRUE otherwise return FALSE.
//    
//                  Input :  10   2
//                  Output : TRUE
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

bool CheckBit(UNIT iNo,int iPos)
{
    UNIT Result = 0;
    UNIT iMask = 0;

    if(iPos <= 0 || iPos > 32)
    {
        printf("Invalid Position\n");
        return -1;
    }

    iMask = 1;
    iMask = iMask << (iPos-1);
    
    Result = iNo & iMask;

    return Result;


}

int main()
{
    UNIT iValue = 0, iLocation = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter Location that you want to check : ");
    scanf("%d",&iLocation);


    bRet = CheckBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("Bit is ON at Location %d\n",iLocation);
    }
    else
    {
        printf("Bit is OFF at Location %d\n",iLocation);
    }

   
    return 0;

}

