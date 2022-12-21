#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of pages : ");
    scanf("%d", &n);
    
    int ref_str[n]; 
    printf("\nEnter the reference string : \n");
    for(int i = 0; i < n; i++) { 
        scanf("%d", &ref_str[i]);
    }
    
    int pageFaults = 0;
    int frames;
    printf("\nEnter number of frames : ");
    scanf("%d",&frames);
    
    int pages;
    pages = sizeof(ref_str)/sizeof(ref_str[0]);
    
    int temp[frames];
    for(int i = 0; i < frames; i++)
    {
        temp[i] = -1;
    }
    
    int idx;
    for(int i = 0; i < pages; i++)
    {
        idx = 0;
        for(int j = 0; j < frames; j++)
        {
            if(ref_str[i] == temp[j]) 
            {
                idx++;
                pageFaults--;
            }
        }
        pageFaults++;
        
        if((pageFaults <= frames) && (idx == 0))
        {
            temp[i] = ref_str[i];
        }
        else if(idx == 0)
        {
            temp[(pageFaults - 1) % frames] = ref_str[i];
        }
        printf("\n");
        
        for(int j = 0; j < frames; j++)
        {
            if(temp[j] != -1)
                printf(" %d", temp[j]);
            else
                printf(" -");
        }
    }
    printf("\n\nTotal Page Faults : %d\n", pageFaults);
    printf("Page Fault ratio : %.2f\n", (float)pageFaults/n);
    printf("Page Hit Ratio : %.2f\n", (float)(n- pageFaults)/n);
    
  return 0;
}



