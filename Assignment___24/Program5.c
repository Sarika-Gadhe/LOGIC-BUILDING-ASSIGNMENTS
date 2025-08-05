//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Write a program which accept string from user and display it in reverse order.             
//
//                   Input :   "Marvellous"
//                   Output :  "suollevraM"
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0;
    int iCount = 0;
    
   
  while(*str != '\0')
  {
        iCount++;
        str++;
  }
  str--;

  for(iCnt = iCount; iCnt > 0; iCnt--,str--)
  {
        printf("%c",*str);
  }

}

int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^'\n]s",arr);
   
    Reverse(arr);

    return 0;

}



