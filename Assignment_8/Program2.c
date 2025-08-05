//_________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Used to accept width and height of rectangle from user and calculate its area.
//  Author :        Sarika Devidas Gadhe
//  Date :          16/05/2025
//
//_________________________________________________________________________________________________


#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    int iCnt = 0;
    double Area = 0;

    Area = fWidth * fHeight;

    return Area;
    
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    
    printf("Enter width : ");
    scanf("%f",&fValue1);
     
    printf("Enter height : ");
    scanf("%f",&fValue2);
    

    dRet = RectArea(fValue1, fValue2);

    printf("Area is %.3f",dRet);

    return 0;
}