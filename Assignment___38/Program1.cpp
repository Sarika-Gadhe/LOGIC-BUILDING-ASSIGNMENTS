//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.cpp
//
//  Description :   Write generic program to multiply two numbers. 
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;


template <class T>
T Multiply(T No1, T No2)
{
    T Mul;

    Mul = No1 * No2;

    return Mul;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<"Multiplication of Integers is : "<<iRet<<"\n";

    float fRet = Multiply(10.5f, 2.0f);
    cout<<"Multiplication of Floats is : "<<fRet<<"\n";
    
    double dRet = Multiply(10.50, 2.02);
    cout<<"Multiplication of Doubles is : "<<dRet<<"\n";

    return 0;
}