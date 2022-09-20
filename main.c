/**************************

                            LINEAR SEARCH PRG WITHOUT FUNCTIONS.

***************************/

#include <stdio.h>
int arr[100];
int size;
int main()
{
    int i,tar,c=0;
    
    printf("\nENTER NO OF ELEMENTS=");
    scanf("%d",&size);
    printf("\nenter %d elements",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nenter the targ element to search in the array=");
    scanf("%d",&tar);
    for(i=0;i<size;i++)
    {
        if(tar==arr[i])
        {
            //printf("\nELEMENT IS FOUND AT %d POS",i+1);
            c++;
            break;
        }
      
    }
    if(c==1)
    {
          printf("\nELEMENT IS FOUND AT %d POS",i+1);
    }
    else
    {
          printf("\nELEMENT IS NOT FOUND");
    }
    printf("\nPRG COMPLETED");
    return 0;
}