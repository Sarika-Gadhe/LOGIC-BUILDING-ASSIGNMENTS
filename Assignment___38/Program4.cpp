//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.cpp
//
//  Description :   Write generic program to accept N values from user and return Largest value. 
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T Max(T *Arr, int iSize)
{
    T Max = Arr[0];
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    
    return Max;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,20.5f,99.8f,9.8f,6.7f};
    
    int iRet = Max(Arr,5);
    cout<<"Maximum of integer array element is : "<<iRet<<"\n";
    
    float fRet = Max(Brr,5);
    cout<<"Maximum of float array element is : "<<fRet<<"\n";


    return 0;
}