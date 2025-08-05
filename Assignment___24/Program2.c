//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Write a program which accept string from user and count number of small characters.                     
//
//                   Input :   "Marvellous"
//                   Output : 9
//
//  Author :        Sarika Devidas Gadhe
//  Date :          05/06/2025
//
//_______________________________________________________________________________________________________________________________

#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(( *str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("number of small characters : %d\n",iRet);

    return 0;

}



