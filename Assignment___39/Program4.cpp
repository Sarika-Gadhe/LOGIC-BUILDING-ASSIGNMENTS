//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.cpp
//
//  Description :   Write generic program which accept N values and search Last occurence of any specific value.
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T SearchLast(T Arr[],int iSize, T iNo)
{
    int i = 0;
    int iLast = -1;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iLast = i;
        }
    }

    return iLast;
}

int main()
{
   int Arr[] = {100,20,30,10,30,40,10,40,10,50};
   int iSize = 10;
   
   int iRet = SearchLast(Arr, iSize, 40);
   cout<<"Last occurrence of 20 in integer array element at index is : "<<iRet<<"\n";
   
   float Brr[] = {1.0,2.0,3.03,1.70,3.09,4.0,1.0,4.0,1.0,5.0};
   int fSize = 10;
   
   float fRet = SearchLast(Brr, fSize, 2.0f);
   cout<<"Last occurrence of 1.5 in integer array element at index is :  "<<fRet<<"\n";
  
   


    return 0;
}