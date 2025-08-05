//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Write a program which accept string from user and count number of capital characters.                     
//
//                   Input :   "Marvellous Multi OS"
//                   Output : 4
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(( *str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
            
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("number of capital characters : %d\n",iRet);

    return 0;

}



