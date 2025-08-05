//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.cpp
//
//  Description :   Write generic program which accept N values and reverse the content.
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T Reverse(T Arr[],int iSize)
{
    int i = 0 ;

    cout<<"After Reverse Elements is : \n";

    for(i = iSize-1; i >= 0; i--)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int i = 0;

   int Arr[] = {10,20,30,40,50,60,70,80,90,100};
   int iSize = 10;
   
   cout<<"Before Reverse Elements is : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";

   Reverse(Arr, iSize);
   

   float Brr[] = {1.0,2.0,3.03,1.70,3.09,4.0,1.0,4.0,1.0,5.0};
   int fSize = 10;

   cout<<"Before Reverse Elements is : \n"; 
    for(i = 0; i < iSize; i++)
    {
        cout<<Brr[i]<<" ";
    }
    cout<<"\n";
   
   Reverse(Brr, fSize);
   
  
   


    return 0;
}