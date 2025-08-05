//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Accept number from user and display below pattern.
//
//                          Input :  4 
//                          Output : # 1 * # 2 * # 3 * # 4 *
//
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
        
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