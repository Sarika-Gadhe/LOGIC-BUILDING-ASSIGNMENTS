//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Write a program which accept string from user and return difference between frequency of small character and
//                  frequency of capital characters.                     
//
//                   Input :   "MarvellouS"
//                   Output : 6
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

int Difference(char *str)
{
    int iCount1 = 0, iCount2 = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(( *str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
            
        }
        if(( *str >= 'A') && (*str <= 'Z'))
        {
            iCount2++;
            
        }
        str++;

    }
    return iCount1 - iCount2;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d\n",iRet);

    return 0;

}



