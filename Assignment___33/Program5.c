//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a program which accept one number from user and range of position from user. Toggle all bits from that range.
//
//                  Input :  897      9  13
//                  Output : Togle all bits position 9 to 13 input number ie. 879
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo,int iStart, int iEnd)
{
   UNIT iMask = 0,iResult = 0;
   int iCnt = 0;


   if(iStart < 1 || iEnd > 32 || iStart > iEnd)
   {
        printf("Invalid Input\n");
        return -1;
   }

   for(iCnt = 0; iCnt <= iEnd; iCnt++)
   {
        iMask = iMask | (1 << (iCnt-1));
   }

   iResult = iNo ^ iMask;

    
}

int main()
{
    UNIT iValue = 0;
    int iRange1 = 0, iRange2 = 0;
    int iRet = 0;
   
    printf("Enter the number to check bit is ON or OFF : ");
    scanf("%d",&iValue);

    printf("Enter Start : ");
    scanf("%d",&iRange1);

    printf("Enter End: ");
    scanf("%d",&iRange2);
    
    iRet = ToggleBit(iValue,iRange1, iRange2);
    printf("Number after toggle from %d to %d is : %u \n",iRange1,iRange2,iRet);
   
  
    
   
    return 0;

}

