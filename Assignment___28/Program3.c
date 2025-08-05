//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.c
//  Description :   Write application which accept file name from user and read all data from that file and display content on screen.                            
//
//                   Input :   Demo.txt
//  
//                   Output :  Display all data of file.
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
    int iRet = 0;

    printf("Enter the file name that you want to open : \n ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }
    else
    {
        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s",Buffer);
        }
        close(fd);
    }
    
    

   return 0;

}



