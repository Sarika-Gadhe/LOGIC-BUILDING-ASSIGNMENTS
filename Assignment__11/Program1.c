//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Accept number from user and display below pattern.
//
//                          Input :  5        
//                          Output : A B C D E
//
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
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