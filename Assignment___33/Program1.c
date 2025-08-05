//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//
//  Description :   Write a program which accept one number from user and count number of ON (1) bits in it without using % 
//                   and / operator
//
//                  Input :  11
//                  Output : 3
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

int CountOne(UNIT iNo)
{
    int iCount = 0;
    
    while(iNo != 0)
    {
        if(iNo & 1)
        {
            iCount++;
        }
        iNo = iNo>>1;
    }
    return iCount;

}

int main()
{
    UNIT iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

   printf("Number of ON bits are : %d\n",iRet);
   
    return 0;

}

