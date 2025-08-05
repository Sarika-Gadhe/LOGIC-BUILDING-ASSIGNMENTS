//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Accept number from user and display below pattern.
//
//                          Input :  8
//                          Output : 2 4 6 8  10 12 14 16
//
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iNo)
{
    int iCnt = 0;
    int iNum = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iNum* iCnt);
        
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements ;\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}