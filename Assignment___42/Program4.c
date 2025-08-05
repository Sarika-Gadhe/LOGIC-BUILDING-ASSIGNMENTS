//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a recurive program which accept number from user and return its factorial.
//
//                  Input  :  5
//
//                  Output :  120
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int Fact(int iNo)
{
   static int iFact = 1;
   static int i = 1;

   if(i <= iNo)
   {
        iFact = iFact * i;
        i++;
        Fact(iNo);
   }

   return iFact;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number :\n");
   scanf("%d",&iValue);

   iRet = Fact(iValue);

   printf("Factorial of number is : %d\n",iRet);

    return 0 ;
}
