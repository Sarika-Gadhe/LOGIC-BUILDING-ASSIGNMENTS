//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Accept number of rows and number of columns from user and display below pattern.
//
//                          Input :  iRows = 4        iCol = 5
//
//                          Output :  2 4 6 8 10
//                                    1 3 5 7 9
//                                    2 4 6 8 10
//                                    1 3 5 7 9
//
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0,j = 0,iNum = 2,iCount = 1;

    for(i = 1;i <= iRow; i++)
    {
        for(j = 1,iNum = 2,iCount = 1; j <= iCol; j++)
        {
           if((i % 2) == 0)
           {
              if((iCount % 2) != 0)
              {
                printf("%d\t",iCount);
              }
              iCount = iCount + 2;
           }
           else
           {
              printf("%d\t",iNum * j);
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