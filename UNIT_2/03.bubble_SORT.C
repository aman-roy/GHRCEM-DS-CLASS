#include<stdio.h>
void main()
{
    int i,j,count,temp,arr[20];
    //taking sizeof array from user
    printf("enter how many numbers\n");
    scanf("%d",&count);
    //taking inputs for array from user
    for(i=0; i<count; i++)
        scanf("%d",&arr[i]);
    //logic for bubble sort
    for(i=count-2; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])//for decending order change "arr[j]<arr[j+1]"
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //printing sorted array
    printf("sorted array in acending order:\n");
    for(i=0; i<count; i++)
        printf("%d\n",arr[i]);
}
