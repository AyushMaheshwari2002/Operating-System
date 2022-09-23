/*  Write a C program to demonstrate Zombie Process.
    
    A process which has finished the execution but still has entry in the process table to report to its parent process is known as a zombie process.
    
    In this, the parent process is put to sleep for a long time while the child process is terminated using exit(0). 
    When a child process is terminated using exit(0) then the parent process still reads the status of the child process.
*/



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    printf("Ayush Maheshwari \tSection - C \tStudent ID - 20011148\n\n");
    
    int pid = fork();
    
    // child process
    if(pid == 0)
    {
        printf("Child Process is Running.\n");
        printf("PID : %d\n", getpid());
        printf("Parent's PID : %d\n", getppid());
        exit(0);
    }
    else {
        // parent process
        sleep(10);
        printf("\nParent Process is Running.\n");
        printf("PID : %d", getpid());
    }
    return 0;
}



