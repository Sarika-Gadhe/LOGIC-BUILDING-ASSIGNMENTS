//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Accept number of rows and number of columns from user and display below pattern.
//
//                          Input :  iRows = 3       iCol = 4
//
//                          Output :   1   2   3   4  
//                                     5   6   7   8
//                                     9   10  11  12
//                                                          
//                                     
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++,iCount++)
        {
            printf("%d\t",iCount);
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