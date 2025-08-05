//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.cpp
//
//  Description :   Write generic program to accept N values from user and return addition of that values. 
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T Summation(T *Arr, int iSize)
{
    T Sum = 0;

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + Arr[i];
    }
    
    return Sum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,20.5f,99.8f,9.8f,6.7f};
    
    int iSum = Summation(Arr,5);
    cout<<"Summmation of integer array is : "<<iSum<<"\n";
    
    float fSum = Summation(Brr,5);
    cout<<"Summmation of float array is : "<<fSum<<"\n";


    return 0;
}