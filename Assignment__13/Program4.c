//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Accept number of rows and number of columns from user and display below pattern.
//
//                          Input :  iRows = 4       iCol = 5
//
//                          Output :   4  4  4  4  4
//                                     3  3  3  3  3
//                                     2  2  2  2  2
//                                     1  1  1  1  1                      
//                                     
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0,j = 0;

    for(i = iRow;i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");

    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}