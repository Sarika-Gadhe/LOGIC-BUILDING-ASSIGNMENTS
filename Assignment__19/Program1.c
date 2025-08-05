//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Accept N numbers from user and return frequency of even numbers.
//
//                          Input :  N :  6
//                                   Elements : 85  66  3  80   93   88
//                          
//                          Output :  3          
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{ 
    int iCnt = 0,iCount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
 
    return iCount;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

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

     iRet = CountEven(p, iSize);

    printf("Result is %d", iRet);

    free(p);

    return 0;
}