//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Write a program which accept 2 string from user and concat second string after first string                              
//
//                   Input :   "Marvellous multi OS" 
//                              "Logic Building" 
//  
//                   Output :  "Marvellous multi OS Logic Building" 
//
//  Author :        Sarika Devidas Gadhe
//_______________________________________________________________________________________________________________________________



#include<stdio.h>


void StrCatX(char *src, char *dest)
{
    while((*src != '\0'))
    {
       src++;
      
    }
    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}


int main()
{
   char Arr[30] = "Marvellous multi OS";
   char Brr[30] = "Logic Building"; 

   StrCatX(Arr, " ");
   StrCatX(Arr,Brr);

   printf("%s\n",Arr);
    

    return 0;

}



