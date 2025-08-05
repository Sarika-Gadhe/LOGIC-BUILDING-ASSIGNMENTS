//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//
//  Description :   Write a recurive program which accept string from user and count number of small character.
// 
//                  Input  :  HRlloWOrlD
//
//                  Output :   5
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int Small(char *str)
{
    static int iCount = 0;

   if(*str !='\0')
   {
        if((*str >= 'a') && (*str <='z'))
        {
            iCount++;
        }
        str++;
        Small(str);
       
   }

   return iCount;
   
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]",Arr);

    iRet = Small(Arr);
    printf("%d\n",iRet);

    return 0 ;
}
