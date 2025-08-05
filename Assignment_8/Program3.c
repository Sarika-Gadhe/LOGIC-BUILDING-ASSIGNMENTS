//____________________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Used to accept distance in kilometre and convert it into meter.(1 Kilometer = 1000 Meter)
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//___________________________________________________________________________________________________________


#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1000;

    return iNo * iMeter;
    
}

int main()
{
    int iValue = 0, iRet = 0.0;
    
    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d in Meter is %d ",iValue,iRet);

    return 0;
}