//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Accept N numbers from user and display all such numbers which contains 3 digits in it.
//
//                          Input :  N :  6 
//                                   Elements : 8225  665  3  76  953   858
//                          
//                          Output :  665  953  858  
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{ 
    int iCnt = 0, iCount = 0, iDigit = 0,iNum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNum = Arr[iCnt];
        iCount = 0;
        while(iNum != 0)
        {
            iNum = iNum / 10;    
            iCount++; 
             
        }
        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
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

     Digits(p, iSize);


    free(p);

    return 0;
}