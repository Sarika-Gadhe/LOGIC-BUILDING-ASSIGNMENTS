//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a recurive program which accept number from user and return largest digit.
// 
//                  Input  :  87983
//
//                  Output :   9
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int Max(int iNo)
{
    static int iMax = 0;
    int iDigit = 0;
   
   if(iNo != 0)
   {
        iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
   }

   return iMax;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("%d\n",iRet);

    return 0 ;
}
