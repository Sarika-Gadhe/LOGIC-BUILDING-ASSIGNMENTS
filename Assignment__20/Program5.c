//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Accept N numbers from user and return product of all odd elements.
//
//                          Input :  N :  6         
//                                   Elements : 15  66  3  70  10  88
//                          
//                          Output :   45
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{ 
    int iCnt = 0, iProduct = 1;
    int bFound = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if((Arr[iCnt] % 2) != 0)
       {
            iProduct = iProduct * Arr[iCnt];
            bFound = 1;
       } 
    }
    if(bFound == 0)
    {
        return 0;
    }
    
    return iProduct;
}
int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
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
    
    iRet = Product(p, iSize);

    printf("Product is %d", iRet);
   
    free(p);

    return 0;
}