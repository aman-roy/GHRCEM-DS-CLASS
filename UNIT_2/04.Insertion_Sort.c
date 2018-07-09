#include<stdio.h>

int main()
{
    //declaring variables
    int count, temp, arr[20];

    //taking size of array from user
    printf("Enter number of elements: ");
    scanf("%d",&count);

     printf("Enter %d elements:\n", count);
    //using for loop to take inputs for array
    for(int i = 0; i < count; i++)
        scanf("%d",&arr[i]);

    //logic for insertion sort
    for(int i = 0; i < count; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j-1]) //for decending order change "arr[j]>arr[j-1]"
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    //printing sorted array
    printf("sorted array in acending order\n");
    for(int i = 0; i < count; i++)
        printf("%d\n",arr[i]);

    return 0;
}
