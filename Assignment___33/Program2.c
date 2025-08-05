//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
//
//                  Input :  10    15
//                  Output : 2      4
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

void CommonOnBits(UNIT iNo1,UNIT iNo2)
{
    UNIT iResult = iNo1 & iNo2;

    int iCount = 0;
    
    while(iResult != 0)
    {
        if(iResult & 1)
        {
            printf("%d\n",iCount);
        }
        iResult = iResult >> 1;
        iCount++;

    }
    printf("\n");

}

int main()
{
    UNIT iValue1 = 0,iValue2 = 0;

    printf("Enter the 1st number : ");
    scanf("%d",&iValue1);

    printf("Enter the 2nd number : ");
    scanf("%d",&iValue2);

    CommonOnBits(iValue1,iValue2);
   
    return 0;

}

