//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Write a program which accept string from user and copy capital character of that string into another string.                                  
//
//                   Input :   "Marvellous Multi OS"  
//  
//                   Output :  "MMOS"               in another string
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>


void StrCpyCap(char *src, char *dest)
{
    while((*src != '\0'))
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;

             dest++;

        }
        src++;
      
    }

    *dest = '\0';
}


int main()
{
   char Arr[30] = "Marvellous Multi OS";
   char Brr[30];          

   StrCpyCap(Arr,Brr);

   printf("%s",Brr);
    

    return 0;

}



