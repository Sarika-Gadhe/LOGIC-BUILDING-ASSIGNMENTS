//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Write a program which accept file name from user and count number of occurance of that characters from that file.                      
//
//                   Input :   Demo.txt      'S'
//  
//                   Output :  Frequency of M is 7
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountChar(char FName[],char ch)
{
    int fd = 0, iRet = 0, iCnt = 0,iCount = 0;
    char Buffer[1024];
    
    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(iCnt = 0; iCnt < iRet ;iCnt++)
        {
            if(ch == Buffer[iCnt])
            {
                iCount++;
            }
        }
    }

    close(fd);

    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter the file name : ");
    scanf("%s",FileName);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency of %c is : %d",cValue,iRet);

   return 0;

}



