//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Accept number of rows and number of columns from user and display below pattern.
//
//                          Input :  iRows = 6        iCol = 6
//
//                          Output :  *  *  *  *  *  *
//                                    *  *           *
//                                    *     *        *  
//                                    *        *     * 
//                                    *           *  *  
//                                    *  *  *  *  *  *                              
//
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0,j = 0;
    
    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(i = 1;i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
           if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
           {
                printf("*\t");
           }
           else
           {
                printf("\t");
           }
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