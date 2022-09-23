//  Write a C program in which parent process computes the sum of even Numbers and child process computes the sum of odd number stored in an array using a fork().


#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Ayush Maheshwari \tSection - C \tStudent ID - 20011148\n\n");
    
    int n;
    printf("Enter the size of array : ");
    scanf("%d" , &n);
    
    int arr[n], even_sum = 0, odd_sum = 0;
    printf("\nEnter the elements in the array : \n");
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    
    int pid = fork();
    if(pid == 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0)
                odd_sum += arr[i];
        }
        
        printf("\nSum of odd numbers : %d\n", odd_sum);
        printf("Get PID : %d\n", getpid());
        printf("\nParent PID : %d\n", getppid());
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 0)
                even_sum += arr[i];
        }
        
        printf("\nSum of even numbers : %d\n", even_sum);
        printf("Get PID : %d\n", getpid());
    }
    return 0;
}



