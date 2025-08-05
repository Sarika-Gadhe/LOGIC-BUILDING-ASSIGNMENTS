//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a program which accept one number, two position from user and check whether bit at first or 
//                  bit at second position is ON or OFF.
//
//                  Input :  10  3   7
//                  Output : TRUE
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo,UNIT iPos1, UNIT iPos2)
{
   UNIT iMask1 = 1,iMask2 = 1;

   iMask1 = iMask1 << iPos1-1;
   iMask2 = iMask2 << iPos2-1;

    if((iNo & iMask1) && (iNo & iMask2))
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
    UNIT iValue = 0, iLocation1 = 0, iLocation2 = 0;

    bool bRet= false;

    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    printf("Enter first Location : ");
    scanf("%d",&iLocation1);

    printf("Enter second Location : ");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue,iLocation1,iLocation2);

    if(bRet == true)
    {
        printf("%d and %d bit is ON\n",iLocation1,iLocation2);
    }
    else
    {
        printf("%d and %d bit is OFF\n",iLocation1,iLocation2);
    }

  
    
   
    return 0;

}

