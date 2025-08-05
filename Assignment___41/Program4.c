//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//
//  Description :   Write a recurive program which display below pattern.
// 
//                  Input  :  6
//
//                  Output :  A  B  C  D  E  F
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


void Display(int iNo)
{
    static int i = 0;
    static char ch = 'A';

    if(i < iNo)
    {
        printf("%c\t",ch);
        i++;
        ch++;
        Display(iNo);
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    printf("\n");
    return 0 ;
}
