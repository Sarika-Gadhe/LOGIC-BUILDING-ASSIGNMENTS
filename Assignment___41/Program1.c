//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//
//  Description :   Write a recurive program which display below pattern.
// 
//                  Input  :  5
//
//                  Output :   *  *  *  *  *
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        printf("*\t");
        i++;
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
