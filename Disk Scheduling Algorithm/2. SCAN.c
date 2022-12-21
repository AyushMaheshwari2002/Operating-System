#include <stdio.h>
#include <stdlib.h>
#define LOW 0
#define HIGH 199

int main()
{
    int queue[20];
    int head, max, q_size, temp, sum;
    int dloc;           //location of disk (head) arr
    
    printf("Enter the initial Position of RW head : ");
    scanf("%d", &head);
     
    printf("\nEnter the number of Element in the requesting queue = ");
    scanf("%d", &q_size);
    
    printf("\nEnter the Disk track Element = \n");
    for(int i = 0; i < q_size; i++) {
        scanf("%d", &queue[i]);
    }
    
    queue[q_size] = head;    //add RW head into queue
    q_size++;
    
    //sort the array
    for(int i = 0; i < q_size; i++) 
    {
        for(int j = i; j < q_size; j++) 
        {
            if(queue[i] > queue[j]) 
            {
                temp = queue[i];
                queue[i] = queue[j];
                queue[j] = temp;
            }
        }
    }
    
    printf("\nSeries Sequence : \n");
    max = queue[q_size-1];
    for(int i = 0; i < q_size; i++) 
    {
        if(head == queue[i]) 
        {
            dloc = i;
            break;
        }
    }
    if(abs(head-LOW) <= abs(head-HIGH)) 
    {
        for(int j = dloc; j >= 0; j--) {
            printf("%d --> ",queue[j]);
        }
        
        for(int j = dloc+1; j < q_size; j++) {
            printf("%d --> ",queue[j]);
        }
    }
    
    else {
        for(int j = dloc+1; j < q_size; j++) {
            printf("%d --> ",queue[j]);
        }
        for(int j = dloc; j >= 0; j--) {
            printf("%d --> ",queue[j]);
        }
    }
    sum = head + max;
     
    printf("\n\nTotal No. of Head Movements = %d", sum);
    
    return 0;
    // 23 89 132 42 187 
}




