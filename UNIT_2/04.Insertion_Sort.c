#include<stdio.h>
void main()
{
    //declaring variables
    int i,j,count,temp,arr[20];
    //taking size of array from user
    printf("enter number of elements");
    scanf("%d",&count);
    //using for loop to take inputs for array
    printf("enter elements\n");
    for(i=0; i<count; i++)
        scanf("%d",&arr[i]);
    //logic for insertion sort
    for(i=1; i<count; i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp<arr[j]&&j>=0)//for decending order just change "temp>arr"
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=temp;
    }
    //printing sorted array
    printf("sorted array in acending order\n");
    for(i=0; i<count; i++)
        printf("%d\n",arr[i]);
}
