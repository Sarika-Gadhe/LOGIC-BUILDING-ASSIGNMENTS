//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a recurive program which accept string number from user and return smallest digit.
// 
//                  Input  :  87983
//
//                  Output :   3
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int Min(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;
   
   if(iNo != 0)
   {
        iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
   }

   return iMin;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("%d\n",iRet);

    return 0 ;
}
