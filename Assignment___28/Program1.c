//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.c
//  Description :   Write application which accept file name from user and open that file in read mode.                             
//
//                   Input :   Demo.txt
//  
//                   Output :  File opened successfully
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

    printf("Enter the file name that you want to open : \n ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }
    
    printf("File is Successfully opened with FD %d\n",fd);

   return 0;

}



