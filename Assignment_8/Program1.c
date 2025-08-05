//_________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Used to accept radius of circle from user and calculate its area. Consider
//                  value of PI as 3.14(Area = PI * Radius * Radius)
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

double CircleArea(float fRadius)
{
    int iCnt = 0;
    float PI = 3.14;
    double Area = 0;

    Area = PI * fRadius * fRadius;

    return Area;
    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter radius : ");
    scanf("%f",&fValue);
    
    dRet = CircleArea(fValue);

    printf("Area is %.4f",dRet);

    return 0;
}