//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Accept number of rows and number of columns from user and display below pattern.
//
//                          Input :  iRows = 4        iCol = 4
//
//                          Output :   A  B  C  D
//                                     a  b  c  d
//                                     A  B  C  D
//                                     a  b  c  d
//
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0,j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1;i <= iRow; i++)
    {
        for(j = 1,ch1 = 'A',ch2 = 'a'; j <= iCol; j++,ch1++,ch2++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                 printf("%c\t",ch1);
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