//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.cpp
//
//  Description :   Write generic program to accept N values from user and return Smallest value. 
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T Min(T *Arr, int iSize)
{
    T Min = Arr[0];
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    
    return Min;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,20.5f,99.8f,9.8f,6.7f};
    
    int iRet = Min(Arr,5);
    cout<<"Minimum of integer array element is : "<<iRet<<"\n";
    
    float fRet = Min(Brr,5);
    cout<<"Minimum of float array element is : "<<fRet<<"\n";


    return 0;
}