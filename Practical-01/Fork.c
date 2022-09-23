/*  Write a C program to demonstrate the use of fork() system call.
    
    * Fork System Call is used to create a new process which is called the Child Process which runs concurrently with the parent process. 
    * The parent process is the process which makes the fork() call. 
    * Fork() function is defined in "unistd.h" header file. 
    * Fork() system call is Unix/Linux specific system call.
    
    * PID is the Process Identification Number on Linux/Unix OS.
*/



#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Ayush Maheshwari \tSection - C \tStudent ID - 20011148\n\n");
    
    fork();
    
    printf("Hello World!\n");
    printf("Get PID : %d\n\n", getpid());
    
    return 0;
}



