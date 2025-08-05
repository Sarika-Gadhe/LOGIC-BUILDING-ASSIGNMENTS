//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.cpp
//
//  Description :   Write generic program which accept N values and count frequency of any specific value.
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T Frequnecy(T Arr[],int iSize, T iNo)
{
    int iCount = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
   int Arr[] = {10,20,30,10,30,40,10,40,10,50};
   int iSize = 10;
   
   int iRet = Frequnecy(Arr, iSize, 10);
   cout<<"Freuency of 10 in integer element : "<<iRet<<"\n";
   
   float Brr[] = {1.0,2.0,3.03,1.70,3.09,4.0,1.0,4.0,1.0,5.0};
   int fSize = 10;
   
   float fRet = Frequnecy(Brr, fSize, 1.0f);
   cout<<"Freuency of 1.0 in float element : "<<fRet<<"\n";
  
   


    return 0;
}