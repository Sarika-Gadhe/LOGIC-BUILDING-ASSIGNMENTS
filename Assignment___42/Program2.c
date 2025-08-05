//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a recurive program which accept number from user and return summation of its digits.
// 
//                  Input  :  879
//
//                  Output :  29
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int SumDigit(int iNo)
{
    static int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {

        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        SumDigit(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Summation of digit is : %d\n",iRet);

    printf("\n");
    return 0 ;
}
