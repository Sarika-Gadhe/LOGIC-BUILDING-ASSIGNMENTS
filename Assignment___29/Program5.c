//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Write a program which accept file name from user and one count from user and read number of that character
//                  from starting position                 
//
//                   Input :   Demo.txt      12
//  
//                   Output :  Display first 12 character from Demo.txt
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int Display(char FName[], int iSize)
{
    int fd = 0, iRet = 0;
    char Buffer[1024];
    
    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }

    iRet = read(fd,Buffer,iSize);

    if(iRet != 0)
    {
        write(1,Buffer, iRet);
    }
   

    close(fd);

}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the file name : ");
    scanf("%s",FileName);

    printf("Enter the number of character to read : ");
    scanf(" %d",&iValue);

    Display(FileName,iValue);
   
   return 0;

}



