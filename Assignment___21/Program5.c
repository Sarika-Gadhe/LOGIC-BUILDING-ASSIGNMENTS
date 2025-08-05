//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Accept N numbers from user and display summation of digits of each number.
//
//                          Input :  N :  6 
//                                   Elements : 8225  665  3  76  953   858
//                          
//                          Output :  17  17  3  13  17  21
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{ 
    int iCnt = 0, iCount = 0,iSum = 0,iNum = 0,iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNum = Arr[iCnt];
        iSum = 0;

        while(iNum != 0)
        {
            iDigit = iNum % 10 ;
            iSum = iSum + iDigit;
            iNum = iNum / 10;
        }

        printf("%d\t",iSum);
    }
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;
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

     DigitsSum(p, iSize);


    free(p);

    return 0;
}