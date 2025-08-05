//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//
//  Description :   Write a recurive program which accept string from user and count white spaces.
// 
//                  Input  :  HE llo WOr 
//
//                  Output :   3
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


int WhiteSpace(char *str)
{
   static int iCount = 0;

   if(*str !='\0')
   {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
       
   }

   return iCount;

    
   
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]",Arr);

    iRet = WhiteSpace(Arr);
    printf("%d\n",iRet);

    return 0 ;
}
