//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//
//  Description :   Write a recurive program which accept number from user and return its product of digits.
//
//                  Input  :  523
//
//                  Output :  30
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int Mul(int iNo)
{
   static int iDigit = 0;
   static int iMulti = 1;

    if(iNo != 0)
    {

        iDigit = iNo % 10;
        iMulti = iMulti * iDigit;
        iNo = iNo / 10;

        Mul(iNo);
    }
    
   return iMulti;

}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number :\n");
   scanf("%d",&iValue);

   iRet = Mul(iValue);

   printf("Multiplication of digits is : %d\n",iRet);

    return 0 ;
}
