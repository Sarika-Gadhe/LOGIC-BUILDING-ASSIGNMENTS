//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//
//  Description :   Write a recurive program which accept number from user and display below pattern.
// 
//                  Input  :  5
//
//                  Output :   5  *  4  *  3  *  2  *  1  *
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________




#include<stdio.h>


void Display(int iNo)
{
    static int i = 1;
    static int iNum = 5;

    if(i <= iNo)
    {
        printf("%d\t*\t",iNum);
        i++;
        iNum--;
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
