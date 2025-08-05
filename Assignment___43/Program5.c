//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//
//  Description :   Write a recurive program which accept string number from user and return reverse number.
// 
//                  Input  :  523
//
//                  Output :  325
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int Reverse(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;
   
   if(iNo != 0)
   {
        iDigit = iNo % 10;
        iRev = (iRev * 10) +iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
       
   }

   return iRev;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("%d\n",iRet);

    return 0 ;
}
