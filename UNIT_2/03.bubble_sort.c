#include<stdio.h>

int main()
{
    int count, temp, arr[20];

    //taking sizeof array from user
    printf("Enter how many numbers: ");
    scanf("%d",&count);

    printf("Enter %d elements:\n", count);
    //taking inputs for array from user
    for(int i = 0; i < count; i++)
        scanf("%d",&arr[i]);

    //logic for bubble sort
    for(int i = 0; i < count; i++)
    {
        for(int j = 0; j <= (count-1-i); j++)
        {
            if(arr[j] > arr[j+1]) //for decending order change "arr[j]<arr[j+1]"
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    //printing sorted array
    printf("sorted array in acending order:\n");
    for(int i = 0; i < count; i++)
        printf("%d\t",arr[i]);
    printf("\n");

    return 0;
}
