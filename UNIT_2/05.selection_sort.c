#include<stdio.h>

int main()
{   int i,j,count,temp,arr[20],min_index;
    //taking input from user for size of array
    printf("how many elements in array\n");
    scanf("%d",&count);
    //taking input for array from user
    printf("enter %d elements\n",count);
    for(i=0; i<count; i++)
    {
        scanf("%d",&arr[i]);
    }
    //logic for searching and sorting
    for(i=0; i<count; i++)
    {
        for(j=i+1; j<count; j++)
        {
            if(arr[i]>arr[j])//for decending order change ">" to "<"
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    //printing sorted array
    printf("sorted elements\n");
    for(i=0; i<count; i++)
        printf("%d\n",arr[i]);

}











