#include<stdio.h>

int main()
{   
    int count, temp, arr[20], min_index;

    //taking input from user for size of array
    printf("Enter how many numbers: ");
    scanf("%d",&count);

    printf("Enter %d elements:\n", count);
    //taking inputs for array from user
    for(int i = 0; i < count; i++)
        scanf("%d",&arr[i]);

    //logic for selection sorting
    for(int i = 0; i < count-1; ++i)
    {
        min_index = i;
        for (int j = i+1; j < count; ++j)
        {
            if(arr[j] < arr[min_index])
                min_index = j;
        }

        // Swap the min value at index i
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    
    //printing sorted array
    printf("sorted array in acending order:\n");
    for(int i = 0; i < count; i++)
        printf("%d\t",arr[i]);
    printf("\n");

    return 0;
}



/*

Output:

Enter how many numbers: 10
Enter 10 elements:
67 4 56 54 76 86 342 87 1 3
sorted array in acending order:
1   3   4   54  56  67  76  86  87  342 

*/







