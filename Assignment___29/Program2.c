//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Write a program which accept file name from user and count number of small character from that file.                      
//
//                   Input :   Demo.txt
//  
//                   Output :  Number of small character are 23
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountSmall(char FName[])
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
            if(Buffer[iCnt] >= 'a' && Buffer[iCnt] <= 'z')
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

    printf("Enter the file name : ");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small character are %d",iRet);

   return 0;

}



