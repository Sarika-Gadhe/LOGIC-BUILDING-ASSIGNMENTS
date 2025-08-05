//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.c
//  Description :   Write application which accept file name from user and one string from user. write that string at the end of file.                       
//
//                   Input :   Demo.txt
//                             Hello World             
//  
//                   Output :  write Hello world at the end of Demo.txt file
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
    char Fname[100] = {'\0'};
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want open : \n ");
    scanf("%s",Fname);

    printf("Enter the String : ");
    scanf(" %[^'\n']",Buffer);

    fd = open(Fname,O_CREAT|O_WRONLY | O_APPEND,0777);
    
    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }
 
    iRet = write(fd,Buffer,strlen(Buffer));
    
    printf("Data appended successfully.\n");

    close(fd);
    
   return 0;

}



