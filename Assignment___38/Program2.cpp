//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.cpp
//
//  Description :   Write generic program to find largest number from three numbers. 
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T Max(T No1, T No2, T No3)
{
    T Max = 0;

    if((No1 > No2) && (No1 > No3))
    {
        Max = No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        Max = No2;
    }
    else
    {
        Max = No3;  
    }

     return Max;
}

int main()
{
    int iRet = Max(100,50,20);
    cout<<"Maximum integer is : "<<iRet<<"\n";

    float fRet = Max(100.5f,500.6f,20.9f);
    cout<<"Maximum float is : "<<fRet<<"\n";

    double dRet = Max(10.99,50.77,200.77);
    cout<<"Maximum double is : "<<dRet<<"\n";

    char cRet = Max('A','Z','S');
    cout<<"Maximum char is : "<<cRet<<"\n";



    return 0;
}