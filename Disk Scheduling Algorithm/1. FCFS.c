#include<stdio.h>
#include<stdlib.h>

int main()
{
    int current_head_pos, n, TotalSeekTime = 0;
    
    printf("Enter the current head position = ");
    scanf("%d", &current_head_pos);
    
    printf("\nEnter the number of Element in the requesting queue = \n");
    scanf("%d", &n);
    
    int request_queue[n];
    printf("\nEnter the Disk track Element = ");
    for(int i = 0; i < n; i++)
        scanf("%d", &request_queue[i]);
    
    for(int i = 0; i < n ; i++)
    {
        TotalSeekTime += abs(current_head_pos - request_queue[i]);
        current_head_pos = request_queue[i];
    }
    
    printf("\nTotal Seek time is equal to : %d\n", TotalSeekTime);
    printf("\nAverage Seek time : %.2f\n", (float)TotalSeekTime/n);    
}



