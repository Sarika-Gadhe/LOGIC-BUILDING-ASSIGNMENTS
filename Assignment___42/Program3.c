//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//
//  Description :   Write a recurive program which accept string from user and count number of characters.
// 
//                  Input  :  Hello
//
//                  Output :  5
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int Strlen(char *str)
{
   static int iCount = 0;

   if(*str !='\0')
   {
        iCount++;
        str++;
        Strlen(str);
   }

   return iCount;
}

int main()
{
    char Arr[] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%s",Arr);

    iRet = Strlen(Arr);

    printf("String length is : %d\n",iRet);

    printf("\n");
    return 0 ;
}
