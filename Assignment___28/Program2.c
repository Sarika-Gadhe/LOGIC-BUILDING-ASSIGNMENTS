//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.c
//  Description :   Write application which accept file name from user and create that file.                            
//
//                   Input :   Demo.txt
//  
//                   Output :  File created successfully
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

    printf("Enter the file name that you want to create : \n ");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }
    
    printf("File is Successfully create with FD %d\n",fd);

   return 0;

}



