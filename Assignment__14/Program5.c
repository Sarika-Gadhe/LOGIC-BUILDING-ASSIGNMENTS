//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Accept number of rows and number of columns from user and display below pattern.
//
//                          Input :  iRows = 5    iCol = 5
//
//                          Output :    a   b   c   d   e
//                                      1   2   3   4   5
//                                      a   b   c   d   e  
//                                      1   2   3   4   5 
//                                      a   b   c   d   e     
//
//  Author :        Sarika Devidas Gadhe
//  Date :          20/05/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0,j = 0,iCount = 1;
    char ch = '\0';
    

    for(i = 1;i <= iRow; i++)
    {
        for(j = 1,ch='a',iCount = 1; j <= iCol; j++,iCount++,ch++)
        {
           if((i % 2) == 0)
           {
                printf("%d\t",iCount);
           }   
           else
           {
                printf("%c\t",ch);
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