//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.cpp
//
//  Description :   Write generic program which accept one value and one number from user. Print that value that number of times
//                   on screen.                       
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


#include<iostream>
using namespace std;

template <class T>
T Display(T Value, int iSize)
{
    int i = 0;

    for(i = 1; i <= iSize; i++)
    {
        cout<<Value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    Display('M',7);
    Display(11,7);
    Display(3.7,7);

    return 0;
}