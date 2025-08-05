//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.cpp
//
//  Description :   Write generic program which accept N values and search first occurence of any specific value.
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T SearchFirst(T Arr[],int iSize, T iNo)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
   int Arr[] = {100,20,30,10,30,40,10,40,10,50};
   int iSize = 10;
   
   int iRet = SearchFirst(Arr, iSize, 40);
   cout<<"First occurrence of 20 in integer array element at index is : "<<iRet<<"\n";
   
   float Brr[] = {1.0,2.0,3.03,1.70,3.09,4.0,1.0,4.0,1.0,5.0};
   int fSize = 10;
   
   float fRet = SearchFirst(Brr, fSize, 2.0f);
   cout<<"First occurrence of 1.5 in integer array element at index is :  "<<fRet<<"\n";
  
   


    return 0;
}