//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.c
//  Description :   Write application which accept file name from user and display size of file                          
//
//                   Input :   Demo.txt
//  
//                   Output :  File size is 56 bytes
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    char Buffer[20] = {'\0'};
    int iRet = 0,iSum = 0;

    printf("Enter the file name that you want open : \n ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }
    else
    {
        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
           iSum = iSum + iRet;
        }

        printf("Size of file is : %d bytes",iSum);
    }
    
    close(fd);
    
   return 0;

}



