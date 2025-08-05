//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//
//  Description :   Write a recurive program which display below pattern.
// 
//                  Input  :  5
//
//                  Output :   1  2  3  4  5
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
        printf("%d\t",i);
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
