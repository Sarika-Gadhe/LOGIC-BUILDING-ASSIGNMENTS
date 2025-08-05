//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Accept N numbers from user and accept one another number as NO, check whether NO is present or not.
//
//                          Input :  N :  6
//                                   NO : 66   
//                                   Elements : 85  66  3  80   93   88
//                          
//                          Output :  TRUE          
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength,int iNo)
{ 
    int iCnt = 0;
    BOOL bFlag = FALSE;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
           bFlag = FALSE;
           break;
        }
    }
 
    return bFlag;
}
int main()
{
    int iSize = 0, iCnt = 0,iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements :");
    scanf("%d",&iSize);
    
    printf("Enter the number  :");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        printf("Enter element : %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

     bRet = Check(p, iSize,iValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(p);

    return 0;
}