/*  Write a C program to demonstrate Orphan Process.
    
    Orphan Process is a process in which the Parent process terminates before the child process. The child's process is put to sleep for a long time 
    using the sleep function. And the parent process is terminated by making the child process orphan.
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
        sleep(5);
        printf("\nChild Process is Running.\n");
        printf("PID : %d\n", getpid());
        printf("Parent's PID : %d\n", getppid());
    }
    else {
        // parent process
        printf("Parent Process is Running.\n");
        printf("PID : %d\n", getpid());
        exit(0);
    }
    return 0;
}



