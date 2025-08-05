//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Write a program which accept string from user and copy the contents of that string into another string.
//                  Note : If third parameter is greater than the size of source string then copy whole string into destination.                                  
//
//                   Input :   "Marvellous Multi OS"
//                              10    
//  
//                   Output :  "Marvellous"               in another string
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>


void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt !=0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}


int main()
{
   char Arr[30] = "Marvellous Multi OS";
   char Brr[30];          

   StrNCpyX(Arr,Brr,10);

   printf("%s",Brr);
    

    return 0;

}



